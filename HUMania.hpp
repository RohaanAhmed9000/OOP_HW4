#include<SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include "ObjectCreator.hpp"
#include<vector>
#include<list>
using namespace std;


class HUMania{

    
    ObjectCreator O; //An Instance of our Object Creator 
    list <Unit*> wings; //list of Unit pointers, which wil hold all the pigeons, butterflies, and bees

    public:

    
    void drawObjects(); 
    void createObject(int, int);
    
    // create destructor which deletes all dynamic objects
    ~HUMania();
};