#ifndef PLAYERLOGIC_H
#define PLAYERLOGIC_H

#include "../Controllers/Commons.h"

const float movementOffset = 10.0f;

class PlayerLogic
{
    public:
        /** Default constructor */
        PlayerLogic(){}

        PlayerLogic(fb::RectSize windowSize);
        /** Default destructor */
        virtual ~PlayerLogic();

        fb::Coordinates moveUp();
        fb::Coordinates moveDown();
        fb::Coordinates moveLeft();
        fb::Coordinates moveRight();

        fb::Coordinates getPosition() const;

    private:
        fb::Coordinates currentCoordinates;
        int screenWidth;
        int scrrenHeight;
};

#endif // PLAYERLOGIC_H
