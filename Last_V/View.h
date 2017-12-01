#ifndef VIEW_H
#define VIEW_H

#include <iostream>

#define columns 16
#define filas 17
using namespace std;

class View
{
public:
char map[filas][columns]={
    "PPPPPPPPPPPPPPP",//1
    "P I III I     P",
    "P P P P P P P P",
    "P  I  I       P",
    "P P P P P P P P",//5
    "P I           P",
    "P P PIP P P P P",
    "P   I         P",
    "P PIP P P P P P",
    "P             P",//10
    "P P P P P P P P",
    "P             P",
    "P P P P P P P P",
    "P             P",
    "PPPPPPPPPPPPPPP",//15
};
    void draw_map();
    void draw_prota(int,int);
    void draw_nulprota(int,int);
    void draw_nulbomba(int,int);
    bool ver_parA(int,int);
    void draw_bomba(int,int);
    void draw_enem(int,int);
    void draw_nulenem(int,int);
    private:

};

#endif // VIEW_H
