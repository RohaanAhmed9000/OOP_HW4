#pragma once
#include<SDL.h>
#include "drawing.hpp"


class Unit{
protected:
    SDL_Rect srcRect, moverRect;

public:
    bool End=false;
    void draw();
    void virtual fly() = 0;
    void virtual clear() = 0;
};