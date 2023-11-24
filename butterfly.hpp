#pragma once
#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

class Butterfly: public Unit{
public:

    void fly() override;
    Butterfly(int x, int y); //inittialising a butterfly on the coordinates of the click
    void clear() override; 

};