#include "Power_UP.h"

Power_UP::Power_UP(){
    this -> tamaniobomba = 1;
}
int Power_UP::get_tamanio(){
    return tamaniobomba;
}
void Power_UP::aumenta_bomba(){
    tamaniobomba+=1;
}
