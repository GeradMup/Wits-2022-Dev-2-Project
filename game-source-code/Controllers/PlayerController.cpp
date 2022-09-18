#include "PlayerController.h"

PlayerController::PlayerController(shared_ptr<PlayerLogic> _playerLogic, shared_ptr<PlayerViews> _playerViews)
{
    playerLogic = _playerLogic;
    playerViews = _playerViews;
}

void PlayerController::keyPressed(fb::Direction dir)
{
    fb::Coordinates newCoords;

    switch(dir)
    {
        case fb::Direction::Up:
            newCoords = playerLogic->moveUp();
            break;
        case fb::Direction::Down:
            newCoords = playerLogic->moveDown();
            break;
        case fb::Direction::Left:
            newCoords = playerLogic->moveLeft();
            break;
        case fb::Direction::Right:
            newCoords = playerLogic->moveRight();
            break;
    }

    playerViews->setPosition(newCoords);
}

PlayerController::~PlayerController()
{
    //dtor
}
