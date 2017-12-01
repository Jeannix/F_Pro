#include "Controler.h"

void Controller::tecla(bool gameover){
    cTecla = getch();
    switch(cTecla){
        case TAB:
            tiempobomb=tiempo;
            cout<<"Allahu Akbar"<<endl;
            veo.draw_bomba(modelus.c.getPosicionX(),modelus.c.getPosicionY());
            break;
        case UP:
            modelus.c.setmPosicionX(1);
            if(veo.ver_parA(modelus.c.getPosicionX(),modelus.c.getPosicionY())){
                modelus.c.setpPosicionX(1);
            }
            break;
        case DOWN:
            modelus.c.setpPosicionX(1);
            if(veo.ver_parA(modelus.c.getPosicionX(),modelus.c.getPosicionY())){
                modelus.c.setmPosicionX(1);
            }
            break;
        case LEFT:
            modelus.c.setmPosicionY(1);
            if(veo.ver_parA(modelus.c.getPosicionX(),modelus.c.getPosicionY())){
                modelus.c.setpPosicionY(1);
            }
            break;
        case RIGHT:
            modelus.c.setpPosicionY(1);
            if(veo.ver_parA(modelus.c.getPosicionX(),modelus.c.getPosicionY())){
                modelus.c.setmPosicionY(1);
            }
            break;
    }
    if(cTecla==ESC){this->gameover=false;}

}
void Controller::mov_ene(){
    int v1 = rand() % 3;
    switch(v1){
        case 1:
            modelus.d.setpPosicionY(1);
            if(veo.ver_parA(modelus.d.getPosicionX(),modelus.d.getPosicionY())){
                modelus.d.setmPosicionY(1);
            }
            break;
        case 2:
            modelus.d.setmPosicionX(1);
            if(veo.ver_parA(modelus.d.getPosicionX(),modelus.d.getPosicionY())){
                modelus.d.setpPosicionX(1);
            }
            break;
        case 3:
            modelus.d.setpPosicionX(1);
            if(veo.ver_parA(modelus.d.getPosicionX(),modelus.d.getPosicionY())){
                modelus.d.setmPosicionX(1);
            }
            break;
        case 0:
            modelus.d.setmPosicionY(1);
            if(veo.ver_parA(modelus.d.getPosicionX(),modelus.d.getPosicionY())){
                modelus.d.setpPosicionY(1);
            }
            break;
    }
}
void Controller::Principal_game(){
    cout<<" BBBBB                      bb                                                "<<endl;
    cout<<" BB   B   oooo  mm mm mmmm  bb        eee  rr rr  mm mm mmmm    aa aa nn nnn  "<<endl;
    cout<<" BBBBBB  oo  oo mmm  mm  mm bbbbbb  ee   e rrr  r mmm  mm  mm  aa aaa nnn  nn "<<endl;
    cout<<" BB   BB oo  oo mmm  mm  mm bb   bb eeeee  rr     mmm  mm  mm aa  aaa nn   nn"<<endl;
    cout<<" BBBBBB   oooo  mmm  mm  mm bbbbbb   eeeee rr     mmm  mm  mm  aaa aa nn   nn "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"                         PRESIONA CUALQUIER TECLA PARA CONTNUAR"<<endl;
    cout<<"                         TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT"<<endl;
    cout<<""<<endl;
    cout<<" Para colocar bombas usa tab"<<endl;
    while(gameover){
        tiempo+=1;
//        std::cout<<"pos x"<<modelus.c.getPosicionX()<<std::endl;
//        std::cout<<"pos y"<<modelus.c.getPosicionY()<<std::endl;
        veo.draw_nulprota(modelus.c.getPosicionX(),modelus.c.getPosicionY());
        veo.draw_nulenem(modelus.d.getPosicionX(),modelus.d.getPosicionY());
        if(tiempo-tiempobomb==2){
            veo.draw_nulbomba(modelus.c.getPosicionX(),modelus.c.getPosicionY());
        }
        tecla(false);
        mov_ene();

        veo.draw_prota(modelus.c.getPosicionX(),modelus.c.getPosicionY());
        veo.draw_enem(modelus.d.getPosicionX(),modelus.d.getPosicionY());

        system("cls");
        veo.draw_map();
        veo.draw_prota(modelus.c.getPosicionX(),modelus.c.getPosicionY());
        veo.draw_enem(modelus.d.getPosicionX(),modelus.d.getPosicionY());
    }
}
