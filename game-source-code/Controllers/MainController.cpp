#include "MainController.h"

#include <iostream>

MainController::MainController()
{
    ///Start by loading all the resources needed for the game.
    gameResources = Resources();
    gameResources.loadResources();

    mainWindowViews = MainWindowViews();
    mainWindow = mainWindowViews.getMainWindow();

    splashScreen = SplashScreen(mainWindowViews.getWindowSize(), gameResources.getSansationsFont());
    playerLogic = make_shared<PlayerLogic>(mainWindowViews.getWindowSize());
    playerViews = make_shared<PlayerViews>(gameResources.getPlayerSprites());
    playerController = PlayerController(playerLogic, playerViews);

    ///Set the state of the game to starting
    gameState = State::Starting;
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
            switch(event.type)
            {
            case sf::Event::Closed:
                mainWindow->close();
                break;
            case sf::Event::KeyPressed:
                processKeyPress(event.key.code);
                break;
            default:
                break;
            }
        }
        printObjects();
    }
}

void MainController::printObjects()
{
    switch(gameState)
    {
    case State::Starting:
        splashScreen.display(mainWindow);
        break;
    case State::Playing:
        playerViews->display(mainWindow);
        break;
    default:
        break;
    }
}

void MainController::processKeyPress(sf::Keyboard::Key keyCode)
{
    switch(keyCode)
    {
        case sf::Keyboard::Enter:
            gameState = State::Playing;
            break;

        case sf::Keyboard::Up:
            playerController.keyPressed(fb::Direction::Up);
            break;
        case sf::Keyboard::Down:
            playerController.keyPressed(fb::Direction::Down);
            break;
        case sf::Keyboard::Right:
            playerController.keyPressed(fb::Direction::Right);
            break;
        case sf::Keyboard::Left:
            playerController.keyPressed(fb::Direction::Left);
            break;

        case sf::Keyboard::Escape:
            mainWindow->close();
            break;

        default:
            break;
    }
}

MainController::~MainController()
{
    //dtor
}
