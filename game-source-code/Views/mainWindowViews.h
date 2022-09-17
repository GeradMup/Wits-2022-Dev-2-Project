#ifndef MAINWINDOWVIEWS_H
#define MAINWINDOWVIEWS_H

#include <SFML/Graphics.hpp>
#include <memory>
#include <stdint.h>

using namespace std;

const unsigned int WINDOW_WIDTH = 1000;
const unsigned int WINDOW_HEIGHT = 600;
const unsigned int BITS_PER_PIXEL = 32;
const string TITLE = "Frostbite Game";
const uint32_t STYLE = sf::Style::Titlebar | sf::Style::Close;

/** \brief Defines the size of rectangular object
 *  \param int width of the object
 *  \param int height of the object
 */
struct RectSize
{
    int width;
    int height;

    RectSize(){}
    RectSize(int w, int h) : width(w), height(h){}
};

/** \brief
 *  Class to manage everything on the main game window
 */
class MainWindowViews
{
    public:
        /** \brief
        *  Constructs the main game window
        */
        MainWindowViews();

        /** \brief
         *  Function to get mainWindow
         * \param shared_ptr<sf::RenderWindow>
         * \return
         */
        shared_ptr<sf::RenderWindow> getMainWindow() const;

        /** \brief
         *  Displays all the game objects on the main window
         */
        void displayObjects();

        /** \brief Gets the size of the game window
         * \return rectSize size of the window
         */

        RectSize getWindowSize() const;
        /** \brief
        *  Destroys the main game window
        */
        ~MainWindowViews();

    private:
        shared_ptr<sf::RenderWindow> mainWindow;
        sf::VideoMode videoMode;
        RectSize windowSize;
};

#endif // MAINWINDOWVIEWS_H
