#include<iostream>

using namespace std;

int main (){
    int d, t, v;

    cout<<"Ingrese la distancia que recorrió el objeto en metros: \t";
    cin>>d;

    cout<<"Ingrese el tiempo que tardó en segundos: \t";
    cin>>t;

    v=d/t;

    cout<<"La velocidad promedio del objeto fue: "<<v<<"m/s";
    return 0;
}