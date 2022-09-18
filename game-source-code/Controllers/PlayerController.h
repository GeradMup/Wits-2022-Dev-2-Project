#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H

#include <memory>

#include "../Views/PlayerViews.h"
#include "../Services/PlayerLogic.h"
#include "../Controllers/Commons.h"

using namespace std;

///This class is responsible for decoupling the PlayerLogic and the PlayerViews
///This is done in order to ensure that the player movements is not dependent on SFML
class PlayerController
{
    public:
        /** Default constructor */
        PlayerController(){}

        PlayerController(shared_ptr<PlayerLogic> _playerLogic, shared_ptr<PlayerViews> _playerViews);
        /** Default destructor */
        ~PlayerController();

        void keyPressed(fb::Direction dir);

    private:
        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();

        shared_ptr<PlayerLogic> playerLogic;
        shared_ptr<PlayerViews> playerViews;
};

#endif // PLAYERCONTROLLER_H
