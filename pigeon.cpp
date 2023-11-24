#include "pigeon.hpp"

// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass



// fly() is overrided from the superclass
void Pigeon::fly(){
    switch (srcRect.x) //animation for the pigeon
        {
        case 7:
            srcRect = {0, 237, 153, 84};
            break;
        case 0:
            srcRect = {2, 361, 159, 124};
        case 2 :
            srcRect = {7,88,155,103};
        default:
            break;
        }
        
    moverRect.x += 5; //horizontal movement of the pigeon
    if (moverRect.x>1000){
        moverRect.x = 0;
    }
        
    }

Pigeon::Pigeon(int x, int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {7,88,160,103};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}

void Pigeon::clear(){
    delete this;
}
