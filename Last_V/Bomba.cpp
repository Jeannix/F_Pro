#include "Bomba.h"

Bomba::Bomba()
{
    tamanio=2;
    pos.x=2;
    pos.y=2;
}
int Bomba::getPosicionX(){
    return pos.x;
}
int Bomba::getPosicionY(){
    return pos.y;
}
void Bomba::setPosicion(int xz, int yz){
    pos.x=xz;
    pos.y=yz;
}
void Bomba::aum_long(int x){
    tamanio+=x;
}
