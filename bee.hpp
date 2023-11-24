#pragma once

#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

class Bee: public Unit{
protected:
    int count = 0; //Count for having the Bee over for 10-frames
public:

    void fly() override;
    Bee(int x, int y); //Initialising the bee with the coordinates of the current click

    void clear() override; //A function for deleting the object that can be called while the object is still in scope
};