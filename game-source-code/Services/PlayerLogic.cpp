#include "PlayerLogic.h"

PlayerLogic::PlayerLogic(fb::RectSize windowSize)
{
    screenWidth = windowSize.width;
    scrrenHeight = windowSize.height;
}

fb::Coordinates PlayerLogic::moveDown()
{
    currentCoordinates.y = currentCoordinates.y + movementOffset;
    return currentCoordinates;
}

fb::Coordinates PlayerLogic::moveLeft()
{
    currentCoordinates.x = currentCoordinates.x - movementOffset;
    return currentCoordinates;
}

fb::Coordinates PlayerLogic::moveRight()
{
    currentCoordinates.x = currentCoordinates.x + movementOffset;
    return currentCoordinates;
}

fb::Coordinates PlayerLogic::moveUp()
{
    currentCoordinates.y = currentCoordinates.y - movementOffset;
    return currentCoordinates;
}

fb::Coordinates PlayerLogic::getPosition() const
{
    return currentCoordinates;
}

PlayerLogic::~PlayerLogic()
{
    //dtor
}
