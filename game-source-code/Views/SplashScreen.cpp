#include "SplashScreen.h"

#include <iostream>

SplashScreen::SplashScreen(pair<int,int> windowSize, shared_ptr<sf::Font> _textFont)
{
    windowWidth = windowSize.first;
    windowHeight = windowSize.second;
    textFont = _textFont;

    setupGamePurpose();
    setupGameInstructions();
    setupBackground();
    setupContinueInstructions();
}

void SplashScreen::setupGamePurpose()
{
    string gamePurposeString = "Purpose: \n\t *Build an Igloo by jumping on the white ice blocks.\n"
                                "\t *Hide in the Igloo before the temperature drops below 0 degrees celcius.\n"
                                "\t *Avoid being killed by the bear.\n"
                                "\t *Eat the flying birds to stay healthy.";

    gamePurpose.setFont(*textFont);
    gamePurpose.setCharacterSize(FONT_SIZE);
    gamePurpose.setPosition(MIN_X_POS, MIN_Y_POS);
    gamePurpose.setFillColor(sf::Color::Black);
    gamePurpose.setString(gamePurposeString);
}

void SplashScreen::setupGameInstructions()
{
    string instructionsString = "Controls: \n\t Use arrows 'UP', 'DOWN', 'LEFT' and 'RIGHT' for moving the player.";
    float yPos = 250.f;

    playingInstructions.setFont(*textFont);
    playingInstructions.setCharacterSize(FONT_SIZE);
    playingInstructions.setPosition(MIN_X_POS, yPos);
    playingInstructions.setFillColor(sf::Color::Black);
    playingInstructions.setString(instructionsString);
}

void SplashScreen::setupContinueInstructions()
{
    string continueInstructionsString = "Press 'ENTER' to continue or 'ESC' to quit";
    float yPos = 400.f;

    continueInstructions.setFont(*textFont);
    continueInstructions.setCharacterSize(FONT_SIZE);
    continueInstructions.setPosition(MIN_X_POS, yPos);
    continueInstructions.setFillColor(sf::Color::Black);
    continueInstructions.setString(continueInstructionsString);
}

void SplashScreen::setupBackground()
{
    background = sf::RectangleShape();
    background.setSize(sf::Vector2f(windowWidth, windowHeight));
    background.setFillColor(sf::Color::Magenta);
}

void SplashScreen::displaySplashScreen(shared_ptr<sf::RenderWindow> window)
{
    window->clear();
    window->draw(background);
    window->draw(gamePurpose);
    window->draw(playingInstructions);
    window->draw(continueInstructions);
    window->display();
}

SplashScreen::~SplashScreen()
{
    //dtor
}
