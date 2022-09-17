#include "MainController.h"
#include <filesystem>

#include <iostream>

MainController::MainController()
{
    loadResources();

    mainWindowViews = MainWindowViews();
    mainWindow = mainWindowViews.getMainWindow();

    splashScreen = SplashScreen(mainWindowViews.getWindowSize(), sansationFont);
}

void MainController::runGameLoop()
{
    ///Main game loop that will run until the game is closed
    while (mainWindow->isOpen())
    {
        ///This while loop will assess events that have happened on the window
        sf::Event event;
        while (mainWindow->pollEvent(event))
        {
            ///If the user is trying to close the window, we close it.
            if (event.type == sf::Event::Closed)
                mainWindow->close();
        }

        splashScreen.displaySplashScreen(mainWindow);
    }
}

void MainController::loadResources()
{

    sansationFont = make_shared<sf::Font>();
    string sansationFontPath = "resources/Courgette-Regular.ttf";
    bool loadingFontSucceeded = sansationFont->loadFromFile(sansationFontPath);
    if(loadingFontSucceeded == false)
    {
        cout << "Failed to load font";
    }
}

MainController::~MainController()
{
    //dtor
}
