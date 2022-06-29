#include<iostream>

using namespace std;

int main (){
    float base, altura, area=0;

    cout<<"Ingrese la base en cm: ";
    cin>>base;
    cout<<"Ingrese la altura en cm: ";
    cin>>altura;

    area=(base*altura)/2;

    cout<<"El área es: "<<area<<" cm³";

    return 0;
}