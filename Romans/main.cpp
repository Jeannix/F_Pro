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

void inversa(int a, int c)
 {
     for(int i = 0; i<c; i++)
     {
         int x = (a*i)%c;
         if(x<0)
         {
             x = x+c;
         }
         if(x==1)
         {
             cout<<"\n";
             cout<<"Resultado: "<<i<<" mod "<<c<<endl;
             break;
         }
         else if(i == c-1 && x!=1){cout<<"No tiene inverso modular \n";}
     }

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
        cout<<suma(f,g,h);
    }
    if (a=='-'){
        cout<<"ingrese 3 numeros: "<<endl;
        cin>>f;
        cin>>g;
        cin>>h;
        cout<<resta(f,g,h);
    }
    if (a=='*'){
        cout<<"ingrese 3 numeros: "<<endl;
        cin>>f;
        cin>>g;
        cin>>h;
        cout<<mult(f,g,h);
    }
    if (a=='i'){
        cout<<"ingrese 2 numeros: "<<endl;
        cin>>f;
        cin>>g;
        inversa(f,g);
    }
}

int main()
{
    char b;
    menu(b);
    return 0;
}
