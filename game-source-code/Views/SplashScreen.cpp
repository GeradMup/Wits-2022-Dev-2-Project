#include "SplashScreen.h"

SplashScreen::SplashScreen(int _windowWidth, int _windowHeight)
{
    windowHeight = _windowHeight;
    windowWidth = _windowWidth;

    setupGamePurpose();
    setupGameInstructions();
    setupBackground();
}

void SplashScreen::setupGamePurpose()
{
    gamePurpose = sf::Text();
    gamePurpose.setString(GAME_PURPOSE);
}

void SplashScreen::setupGameInstructions()
{
    playingInstructions = sf::Text();
    playingInstructions.setString(PLAYING_INSTRUCTIONS);
}

void SplashScreen::setupBackground()
{
    background = sf::RectangleShape();
    background.setSize(sf::Vector2f(windowWidth, windowHeight));
    background.setFillColor(sf::Color::Blue);
}

SplashScreen::~SplashScreen()
{
    //dtor
}
