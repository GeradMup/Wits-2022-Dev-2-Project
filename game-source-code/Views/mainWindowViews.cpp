#include "mainWindowViews.h"

MainWindowViews::MainWindowViews()
{
    videoMode = sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT, BITS_PER_PIXEL);
    mainWindow = make_shared<sf::RenderWindow>(videoMode, TITLE, STYLE);
    windowSize = RectSize(WINDOW_WIDTH, WINDOW_HEIGHT);

    mainWindow->display();
}

shared_ptr<sf::RenderWindow> MainWindowViews::getMainWindow() const
{
    return mainWindow;
}

void MainWindowViews::displayObjects()
{
    mainWindow->clear();
    mainWindow->display();
}

RectSize MainWindowViews::getWindowSize() const
{
    return windowSize;
}

MainWindowViews::~MainWindowViews()
{
    //dtor
}
