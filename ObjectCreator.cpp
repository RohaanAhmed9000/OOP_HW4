#include "ObjectCreator.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include "pigeon.hpp"


Unit* ObjectCreator::getObject(int x, int y){
    int i = rand()%3;
    // Unit* myobj;
    if (i==1){
        
        return new Bee(x, y);
    }
    else if (i==2){
        return new Butterfly(x, y);
    }
    else{
        return new Pigeon(x, y);
        
    }
    // return myobj;
}