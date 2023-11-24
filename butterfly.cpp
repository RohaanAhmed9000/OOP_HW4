#include "butterfly.hpp"


// fly() is overrided from the superclass
void Butterfly::fly() {
    // for the diagonal movement of the butterfly
    static int updown = 4;

    switch (srcRect.y) //animation of the butterfly
        {
            case 432 : 
                srcRect = {257, 24, 173, 134};
                break;
            case 182 :
                srcRect = {248, 432, 248, 179};
                break;
            default : 
                srcRect = {257, 182, 192, 214};
                break;
        }

    moverRect.x+=5; // horizontal movement of the Butterfly
    if (moverRect.x > 1000){
        moverRect.x = 0;
    }

    //change in vertical direction of the butterflies movement
    moverRect.y=moverRect.y+updown;
    if (moverRect.y>590){
        updown=-4;
    }
    else if (moverRect.y<10){
        updown=4;
    }
}

Butterfly::Butterfly(int x, int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {256,24,174,134};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 50 height
    moverRect = {x, y, 50, 50};
}
void Butterfly::clear(){
    delete this;
}
