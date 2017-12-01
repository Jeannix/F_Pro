#ifndef BOMBA_H
#define BOMBA_H
#include "pj_v_a.h"

class Bomba
{
    public:
        Bomba();
        int getPosicionX();
        int getPosicionY();
        void setPosicion(int,int);

        void aum_long(int);
    protected:
        Posicion pos;
        int tamanio;
};

#endif // BOMBA_H
