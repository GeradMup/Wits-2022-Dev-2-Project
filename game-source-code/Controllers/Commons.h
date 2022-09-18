#ifndef COMMONS_H_INCLUDED
#define COMMONS_H_INCLUDED

///Namespase for some of the common containers used in the frostbite game
namespace fb
{
    struct Coordinates
    {
        float x;
        float y;

        Coordinates(){}
        Coordinates(float _x, float _y) : x(_x), y(_y) {}
    };


    /** \brief Defines the size of rectangular object
    *  \param int width of the object
    *  \param int height of the object
    */
    struct RectSize
    {
        int width;
        int height;

        RectSize(){}
        RectSize(int w, int h) : width(w), height(h){}
    };

    enum class Direction
    {
        Up,
        Down,
        Left,
        Right
    };


}


#endif // COMMONS_H_INCLUDED
