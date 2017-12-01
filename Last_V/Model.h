#ifndef MODEL_H
#define MODEL_H

#include <iostream>

#include "Bomberman.h"
#include "Fantasmas.h"


using namespace std;

class Model
{
    public:
        Bomberman c;
        Oneal d;
    protected:
        friend class Controller;

};

#endif // MODEL_H
