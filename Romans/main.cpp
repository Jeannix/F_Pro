#include <iostream>

using namespace std;

int modulo(int a,int b)
{
    int q=a/b;
    int r=a-q*b;
    if(r<0)
        r+=b;
    return r;
}

int suma(int a, int b, int c){
    int o1=0;
    o1=modulo(a,c);
    int o2=0;
    o2=modulo(b,c);
    int r=0;
    r=o1+o2;
    r=modulo(r,c);
    return r;
}
int resta(int a, int b, int c){
    int o1=0;
    o1=modulo(a,c);
    int o2=0;
    o2=modulo(b,c);
    int r=0;
    r=o1-o2;
    r=modulo(r,c);
    return r;
}
int mult(int a, int b, int c){
    int o1=0;
    o1=modulo(a,c);
    int o2=0;
    o2=modulo(b,c);
    int r=0;
    r=o1*o2;
    r=modulo(r,c);
    return r;
}

void menu(char a){
    cout<<"Ingrese el operador: ";
    cin>>a;
    int f,g,h;
    if (a=='+'){
        cout<<"ingrese 3 numeros: "<<endl;
        cin>>f;
        cin>>g;
        cin>>h;
        cout<<suma(h,f,g);
    }
    if (a=='-'){
        cout<<"ingrese 3 numeros: "<<endl;
        cin>>f;
        cin>>g;
        cin>>h;
        cout<<resta(h,f,g);
    }
    if (a=='*'){
        cout<<"ingrese 3 numeros: "<<endl;
        cin>>f;
        cin>>g;
        cin>>h;
        cout<<mult(h,f,g);
    }
}

int main()
{
    cout<<suma(121,22,11);
    cout<<resta(121,22,11);
    cout<<mult(121,22,11);
    char b;
    menu(b);
    return 0;
}
