#pragma once
#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

class Pigeon: public Unit{

public:
    
    void fly() override;
    Pigeon(int x, int y); //initialising a pigeon on the coordinates of the click
    void clear() override;
    
};
