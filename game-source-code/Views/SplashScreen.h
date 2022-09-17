#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H
#include <SFML/GRAPHICS.hpp>

using namespace std;


const string GAME_PURPOSE = "Build an Igloo by jumping on ice blocks and hide in it before the temperature drops below 0";
const string PLAYING_INSTRUCTIONS = "Use arrows 'UP', 'DOWN', 'LEFT' and 'RIGHT' for moving the player.";

/** \brief
 * SplashScreen class is responsible for the content of the splashscreen
 * Content includes the puporse of the game and instructions for playing
 */
class SplashScreen
{
    public:
        /** \brief Constructs the SplashScreen
         * \param int width of the game window
         * \param int height of the game window
         * \return void
         */
        SplashScreen(int _windowWidth, int _windowHeight);

        /**< Destroys the SplashScreen */
        ~SplashScreen();

    private:
        int windowWidth;
        int windowHeight;
        sf::Text gamePurpose;
        sf::Text playingInstructions;
        sf::RectangleShape background;

        void setupGamePurpose();
        void setupGameInstructions();
        void setupBackground();
};

#endif // SPLASHSCREEN_H
