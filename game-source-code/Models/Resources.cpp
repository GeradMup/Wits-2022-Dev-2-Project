#include "Resources.h"

Resources::Resources()
{
    //ctor
}

bool Resources::loadResources()
{
    if(!loadFonts())
        return false;
}

bool Resources::loadFonts()
{
    courgetteRegularFont = make_shared<sf::Font>();
    string pathToFont = "resources/Courgette-Regular.ttf";
    bool fontLoaded = courgetteRegularFont->loadFromFile(pathToFont);
    return fontLoaded;
}

Resources::~Resources()
{
    //dtor
}
