#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include "../Views/mainWindowViews.h"
#include "../Views/SplashScreen.h"

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
        MainWindowViews mainWindowViews;
        shared_ptr<sf::RenderWindow> mainWindow;

        SplashScreen splashScreen;

        ///PRIVATE FUNCTIONS
        void loadResources();

        ///GAME RESOURCES
        shared_ptr<sf::Font> sansationFont;

};

#endif // MAINCONTROLLER_H
