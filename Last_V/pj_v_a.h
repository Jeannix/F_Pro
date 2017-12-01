#ifndef PJ_V_A_H
#define PJ_V_A_H
#include "Posicion.h"
class Pj
{
    public:
        Pj();
        virtual int getVida()=0;
        virtual int getPosicionX()=0;
        virtual int getPosicionY()=0;

        virtual void setpPosicionX(int)=0;
        virtual void setmPosicionX(int)=0;

        virtual void setpPosicionY(int)=0;
        virtual void setmPosicionY(int)=0;

    protected:
        int vida;
        Posicion myPos;
};

#endif // PJ_V_A_H
