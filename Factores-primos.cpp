#include<iostream>

using namespace std;

int main (){
    int cifra;

    cout<<"Ingrese la cifra: ";
    cin>>cifra;
    cout<<"Sus factores primos menores que 11 son: "<<endl;

    //Dividir la cifra entre 0,2,3,5,7,11...
    if(cifra%2 == 0){
        cout<<"2"<<endl;
    }
    if(cifra%3 == 0){
        cout<<"3"<<endl;
    }
    if(cifra%5 == 0){
        cout<<"5"<<endl;
    }
    if(cifra%7 == 0){
        cout<<"7"<<endl;
    }
    if(cifra%11 == 0){
        cout<<"11"<<endl;
    }

    return 0;
}