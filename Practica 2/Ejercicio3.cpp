#include <iostream>

using namespace std;

int main (){
    int numero;

    cout<<"Ingrese su numero de 4 dijitos: ";
    cin>>numero; //4678

    cout<<numero%10;    //8
    numero/=10;  //467

    cout<<numero%10;    //7
    numero/=10;  //46
    
    cout<<numero%10;    //6
    cout<<numero/10;  //4

    return 0;
}