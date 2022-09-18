#ifndef COMMONS_H_INCLUDED
#define COMMONS_H_INCLUDED

namespace fb
{
    ///Defines the size of a rectangular object
    struct RectSize
    {
        int width;
        int height;

        RectSize(){}
        RectSize(int w, int h) : width(w) , height(h) {}
    };
}


#endif // COMMONS_H_INCLUDED
