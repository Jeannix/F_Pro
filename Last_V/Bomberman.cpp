#include "Bomberman.h"

Bomberman::Bomberman()
{
    this -> puntaje = 0;
    this -> vidas = 3;
    this -> pos.x = 1;
    this -> pos.y = 1;
}
Bomberman::Bomberman(int x,int y)
{
    this -> puntaje = 0;
    this -> vidas = 3;
    this -> pos.x = x;
    this -> pos.y = y;
}
int Bomberman::getVida(){return vidas;}

int Bomberman::getPosicionX(){return pos.x;}
int Bomberman::getPosicionY(){return pos.y;}

void Bomberman::setmPosicionX(int xp){
    pos.x-=xp;
}
void Bomberman::setpPosicionX(int xp){
    pos.x+=xp;
}
void Bomberman::setmPosicionY(int xp){
    pos.y-=xp;
}
void Bomberman::setpPosicionY(int xp){
    pos.y+=xp;
}
void Bomberman::setbomba(int x, int y){
    bomb.setPosicion(x,y);
}
