#ifndef RESOURCES_H
#define RESOURCES_H

#include <SFML/Graphics.hpp>
#include <memory>

using namespace std;

class Resources
{
    public:
        /** Default constructor */
        Resources();
        /** Default destructor */
        ~Resources();

        ///Loads game resources
        ///Returns false if there was an error while trying to load a resource
        bool loadResources();

        shared_ptr<sf::Font> getSansationsFont() const {return sansationsFont;}
        vector<shared_ptr<sf::Image>> getPlayerSprites() const {return playerSprites;}

    private:
        shared_ptr<sf::Font> sansationsFont;
        vector<shared_ptr<sf::Image>> playerSprites;

        bool loadSansationsFont();
        bool loadPlayerSprites();
};

#endif // RESOURCES_H
