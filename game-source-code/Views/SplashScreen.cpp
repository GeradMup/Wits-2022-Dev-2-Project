#include "SplashScreen.h"

SplashScreen::SplashScreen(fb::RectSize windowSize)
{
    windowWidth = windowSize.width;
    windowHeight = windowSize.height;

    setupBackground();
}

void SplashScreen::setupBackground()
{
    background = sf::RectangleShape();
    background.setSize(sf::Vector2f(windowWidth, windowHeight));
    background.setFillColor(sf::Color::Magenta);
}

void SplashScreen::display(shared_ptr<sf::RenderWindow> gameWindow)
{
    gameWindow->clear();
    gameWindow->draw(background);
    gameWindow->display();
}

SplashScreen::~SplashScreen()
{
    //dtor
}
