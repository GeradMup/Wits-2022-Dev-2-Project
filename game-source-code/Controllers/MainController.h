#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include "../Views/mainWindowViews.h"
#include "../Views/SplashScreen.h"

class MainController
{
    public:
        /** Default constructor */
        MainController();

        void runGameLoop();

        /** Default destructor */
        ~MainController();

    private:
        shared_ptr<sf::RenderWindow> mainWindow;

        MainWindowViews mainWindowViews;
        SplashScreen splashScreen;
};

#endif // MAINCONTROLLER_H
