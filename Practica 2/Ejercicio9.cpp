#include <iostream>
#include <math.h>
using namespace std;

int main (){
    float AT,h,b,AC,r;

    cout<<"Ingrese la altura de su triangulo:\t "; cin>>h;
    cout<<"Ingrese la base de su triangulo:\t "; cin>>b;
    cout<<"Ingrese el radio del circulo:\t "; cin>>r;

    AT=b*h/2;
    AC=(3.141592654)*pow(r,2);

    if(AT>AC){
        cout<<"Su triangulo tiene un area mayor al circulo. "<<AT<<">"<<AC;
    }
    else if(AT<AC){
        cout<<"Su triangulo tiene un area menor al circulo. "<<AT<<"<"<<AC;
    }
    else{
        cout<<"Ambas figuras tienen la misma área "<<AT;
    }


    return 0;
}