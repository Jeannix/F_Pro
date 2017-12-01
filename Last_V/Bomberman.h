#ifndef BOMBERMAN_H
#define BOMBERMAN_H
#include "pj_v_a.h"
#include "Bomba.h"


class Bomberman : public Pj
{
    public:
        Bomba bomb;
        Bomberman ();
        Bomberman (int,int);

        int getVida();

        int getPosicionX();
        int getPosicionY();
        void setpPosicionX(int);
        void setmPosicionX(int);
        void setpPosicionY(int);
        void setmPosicionY(int);

        void setbomba(int,int);

    private:
        int puntaje;
        int vidas;
        Posicion pos;
};

#endif // BOMBERMAN_H
