#ifndef KEYBOARDCONTROLLER_H
#define KEYBOARDCONTROLLER_H

enum class State
{
    Starting,
    Playing,
    Won,
    Lost
};

class KeyboardController
{
    public:
        /** Default constructor */
        KeyboardController();
        /** Default destructor */
        ~KeyboardController();

        void assessKeyPressed();

    private:
};

#endif // KEYBOARDCONTROLLER_H
