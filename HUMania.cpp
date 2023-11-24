#include <iostream>
#include "HUMania.hpp"

void HUMania::drawObjects()
{
    // Iteration over all the created winged creatures to draw them and make them fly
    for (Unit* w: wings){
        w->draw();
        w->fly();

        if(w->End){ //For the case when a Bee crosses the screen boundary
            wings.remove(w); //removal from the list
            w->clear();//deletion of the object
        }
    }
}

// creates new objects 
void HUMania::createObject(int x, int y)
{
    Unit* cur = O.getObject(x, y); // Creation of a new object

    wings.push_back(cur); //putting the object into our list of Unit poiunters

    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    
}

HUMania::~HUMania(){ //Deletion of all unit pointers
    for (Unit* w: wings){
        w->clear();
    }
}
