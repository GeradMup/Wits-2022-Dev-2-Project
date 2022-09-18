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

        bool loadResources();

        shared_ptr<sf::Font> getCourgetteRegularFont() const { return courgetteRegularFont; }

        /** Default destructor */
        ~Resources();

    private:
        shared_ptr<sf::Font> courgetteRegularFont;

        bool loadFonts();
};

#endif // RESOURCES_H
