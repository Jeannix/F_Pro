#ifndef ENEMIGO_H
#define ENEMIGO_H
#include "pj_v_a.h"

class Enemigo : public Pj
{
    public:
        Enemigo();
        Enemigo(int,int);
        int getVida();

        virtual int getPosicionX();
        virtual int getPosicionY();

        virtual void setpPosicionX(int);
        virtual void setmPosicionX(int);

        virtual void setpPosicionY(int);
        virtual void setmPosicionY(int);
        static int n;
    private:
        int danho;

};

#endif // ENEMIGO_H
