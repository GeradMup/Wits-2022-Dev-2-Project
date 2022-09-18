#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H
#include <SFML/GRAPHICS.hpp>
#include <memory>

#include "../Controllers/Commons.h"

using namespace std;

const int FONT_SIZE = 26;
const float MIN_X_POS = 50.f;
const float MIN_Y_POS = 30.f;

/** \brief
 * SplashScreen class is responsible for the content of the splashscreen
 * Content includes the puporse of the game and instructions for playing
 */
class SplashScreen
{
    public:
        /**< Default constructor */
        SplashScreen(){}

        /** \brief Constructs the SplashScreen
         * \param pair<int,int> (x,y) windowSize defining the width and height of the window.
         * \param sf::Font textFont to be use for all text messages
         * \return void
         */
        SplashScreen(fb::RectSize windowSize, shared_ptr<sf::Font> _textFont);

        /** \brief Displays the splashscreen on the game window
         * \param shared_ptr<sf::RenderWindow> window where the objects will be drawn
         */
        void display(shared_ptr<sf::RenderWindow> window);

        /**< Destroys the SplashScreen */
        ~SplashScreen();

    private:
        int windowWidth;
        int windowHeight;
        shared_ptr<sf::Font> textFont;

        sf::Text gamePurpose;
        sf::Text playingInstructions;
        sf::Text continueInstructions;
        sf::RectangleShape background;

        void setupGamePurpose();
        void setupGameInstructions();
        void setupBackground();
        void setupContinueInstructions();
};

#endif // SPLASHSCREEN_H
