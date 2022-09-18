#include "Resources.h"

Resources::Resources()
{

}

bool Resources::loadResources()
{
    if(!loadSansationsFont())
        return false;

    if(!loadPlayerSprites())
        return false;

    return true;
}

bool Resources::loadSansationsFont()
{
    sansationsFont = make_shared<sf::Font>();
    string sansationsFontPath = "resources/Courgette-Regular.ttf";
    bool fontLoaded = sansationsFont->loadFromFile(sansationsFontPath);
    return fontLoaded;
}

bool Resources::loadPlayerSprites()
{

    string spritePath = "resources/PlayerSprite/Idle (1).png";
    shared_ptr<sf::Image> sprite = make_shared<sf::Image>();

    bool imageLoaded = sprite->loadFromFile(spritePath);

    playerSprites.push_back(sprite);
    return imageLoaded;
}

Resources::~Resources()
{
    //dtor
}
