#include "bee.hpp"
#include <iostream>



// fly() is overrided from the superclass
void Bee::fly(){
    
    int hover = rand()%75; //A randon number generated  to see if the bee will start hovering on this frame or not 
    
    switch (srcRect.y){//animation of the bee
            case  619 :
                srcRect =  {234, 630, 163, 162};
                break;
            case 630 :
                srcRect = {409, 650, 171, 147};
                break;
            default :
                srcRect = {63, 619, 151, 166};
                break;
        }
    
    if (hover==1 || count>0){ // if the correct number is generated or the bee has already started hovering

        if (count==10){ //if the bee has beem hovering for 10 frames
            count=0;
        }
        else{
            count++; //increment of the count since the bee has started hovering
        }
        
    }
    else{ 
        moverRect.x+=5; //horizontal movement of the bee
    }
    
    if (moverRect.x>1000){
        Unit::End = true;
    }
    
}

Bee::Bee(int x, int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {63,619,151,166};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}
// pigeon implementation will go here
void Bee::clear(){
    delete this;
}
