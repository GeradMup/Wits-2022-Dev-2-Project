#include <iostream>
#include "MainController.h"

using namespace std;

int main()
{
    MainController mainGameController = MainController();
    mainGameController.runGameLoop();

    ///shared_ptr<MainController> mainControllerPtr = make_shared<MainController>();
    ///mainControllerPtr->runGameLoop();
    return 0;
}
