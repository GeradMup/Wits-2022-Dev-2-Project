#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H
#include <SFML/Graphics.hpp>

#include <memory>

#include "../Controllers/Commons.h"

using namespace std;

class SplashScreen
{
    public:
        SplashScreen(){}

        SplashScreen(fb::RectSize windowSize, shared_ptr<sf::Font> _textFont);
        /** Default destructor */
        ~SplashScreen();

        void display(shared_ptr<sf::RenderWindow> gameWindow);

    private:
        int windowWidth;
        int windowHeight;
        shared_ptr<sf::Font> textFont;

        sf::Text gameDescription;
        sf::Text playingInstructions;
        sf::Text continueInstructions;
        sf::RectangleShape background;

        ///Private functions
        void setupGameDescription();
        void setupPlayingInstructions();
        void setupContinueInstructions();
        void setupBackground();
};

#endif // SPLASHSCREEN_H
