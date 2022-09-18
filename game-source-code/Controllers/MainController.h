#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include "../Views/mainWindowViews.h"
#include "../Views/SplashScreen.h"
#include "../Models/Resources.h"
#include "../Views/PlayerViews.h"
#include "../Services/PlayerLogic.h"

#include "PlayerController.h"
#include "KeyboardController.h"

/** \brief Main game controller. Instantiantes all game objects and runs the main game loop
 */
class MainController
{
    public:
        /** Default constructor */
        MainController();
        /** Default destructor */
        ~MainController();

        /** \brief Main game loop that will run throughout the game. Responsible for most of the event handling */
        void runGameLoop();

    private:
        ///Main controller variables
        shared_ptr<sf::RenderWindow> mainWindow;
        State gameState;

        ///Game objects
        MainWindowViews mainWindowViews;
        SplashScreen splashScreen;
        Resources gameResources;
        PlayerController playerController;

        shared_ptr<PlayerLogic> playerLogic;
        shared_ptr<PlayerViews> playerViews;

        ///Private functions
        void processKeyPress(sf::Keyboard::Key keyCode);
        void printObjects();

};

#endif // MAINCONTROLLER_H
