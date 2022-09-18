#include "SplashScreen.h"

SplashScreen::SplashScreen(fb::RectSize windowSize, shared_ptr<sf::Font> _textFont)
{
    windowWidth = windowSize.width;
    windowHeight = windowSize.height;
    textFont = _textFont;

    setupBackground();
    setupGameDescription();
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
    gameWindow->draw(gameDescription);
    gameWindow->display();
}

void SplashScreen::setupGameDescription()
{
    int fontSize = 20;
    float xPos = 10.0f;
    float yPos = 50.0f;
    string gameDescriptionString = "Game Description: \n\t *Build an Igloo by jumping on the ice blocks.\n"
                                    "\t *Hide in the igloo . . . . \n"
                                    "\t *Watch out for the bear.\n";

    //gameDescription = sf::Text();
    gameDescription.setFont(*textFont);
    gameDescription.setCharacterSize(fontSize);
    gameDescription.setPosition(xPos, yPos);
    gameDescription.setFillColor(sf::Color::Black);
    gameDescription.setString(gameDescriptionString);
}

SplashScreen::~SplashScreen()
{
    //dtor
}
