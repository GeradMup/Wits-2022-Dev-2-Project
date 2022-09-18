#include "MainController.h"

MainController::MainController()
{
    mainWindowViews = MainWindowViews();
    mainWindow = mainWindowViews.getMainWindow();

    splashScreen = SplashScreen(mainWindowViews.getWindowSize());
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

        ///Here we just ask the mainwWindowViews to display objects
        splashScreen.display(mainWindow);
    }
}

MainController::~MainController()
{
    //dtor
}
