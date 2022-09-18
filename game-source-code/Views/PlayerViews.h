#ifndef PLAYERVIEWS_H
#define PLAYERVIEWS_H

#include <memory>
#include <SFML/Graphics.hpp>

#include "../Controllers/Commons.h"

using namespace std;

class PlayerViews
{
    public:
        /** Default constructor */
        PlayerViews(vector<shared_ptr<sf::Image>> spriteVec);
        /** Default destructor */
        ~PlayerViews();

        void setPosition(fb::Coordinates coords);

        void display(shared_ptr<sf::RenderWindow> gameWindow);

    private:
        sf::Sprite playerSprite;
        sf::Texture spriteTexture;
};

#endif // PLAYERVIEWS_H
