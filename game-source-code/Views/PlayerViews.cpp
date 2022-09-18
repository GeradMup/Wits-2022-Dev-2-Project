#include "PlayerViews.h"

PlayerViews::PlayerViews(vector<shared_ptr<sf::Image>> spriteVec)
{
    playerSprite = sf::Sprite();
    playerSprite.setColor(sf::Color::Cyan);

    spriteTexture = sf::Texture();
    spriteTexture.loadFromImage(*spriteVec.at(0), sf::IntRect(0.f,0.f,500.f,500.f));

    playerSprite.setTexture(spriteTexture);
    playerSprite.setPosition(0.f,0.f);
    playerSprite.setScale(sf::Vector2f{0.25f,0.25f});

}

void PlayerViews::setPosition(fb::Coordinates coords)
{
    playerSprite.setPosition(coords.x, coords.y);
}

void PlayerViews::display(shared_ptr<sf::RenderWindow> gameWindow)
{
    gameWindow->clear();
    gameWindow->draw(playerSprite);
    gameWindow->display();
}

PlayerViews::~PlayerViews()
{
    //dtor
}
