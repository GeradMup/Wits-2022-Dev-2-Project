#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include "../Views/mainWindowViews.h"
#include "../Views/SplashScreen.h"
#include "../Models/Resources.h"

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
        Resources resources;
};

#endif // MAINCONTROLLER_H
