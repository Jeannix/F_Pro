#ifndef FANTASMAS_H
#define FANTASMAS_H
#include "Enemigo.h"
#include "Posicion.h"
class Ballon : public Enemigo
{
    Posicion pos;
    public:
        Ballon();
        Ballon(int, int);
};
class Oneal : public Enemigo
{
    Posicion mypos;
    public:
        Oneal();
        Oneal(int, int);
};
#endif // FANTASMAS_H
