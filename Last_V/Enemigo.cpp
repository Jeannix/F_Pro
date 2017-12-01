#include "Enemigo.h"
Enemigo::Enemigo()
{
    myPos.x=9;
    myPos.y=10;
    vida=3;
}
Enemigo::Enemigo(int y,int z)
{
    myPos.x=y;
    myPos.y=z;
    vida=3;
}

int Enemigo::getVida(){
    return vida;
}
int Enemigo::getPosicionX(){
    return myPos.x;
}
int Enemigo::getPosicionY(){
    return myPos.y;
}

void Enemigo::setmPosicionX(int xp){
    myPos.x-=xp;
}
void Enemigo::setpPosicionX(int xp){
    myPos.x+=xp;
}
void Enemigo::setmPosicionY(int xp){
    myPos.y-=xp;
}
void Enemigo::setpPosicionY(int xp){
    myPos.y+=xp;
}
