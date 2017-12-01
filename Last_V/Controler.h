#ifndef CONTROLER_H
#define CONTROLER_H
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include"windows.h"
#include<stdlib.h>

#include "Model.h"
#include "View.h"

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define ESC 27
#define ENTER 13
#define TAB 9

using namespace std;
class Controller
{
    public:
        int puntaje;
        int tiempo=0;
        int tiempobomb=0;
        void tecla(bool gameover);
        void Principal_game();
        void mov_ene();

        //////////////////

        Model modelus;
        View veo;
    protected:
        bool gameover;
        char cTecla;

};
#endif // CONTROLER_H
