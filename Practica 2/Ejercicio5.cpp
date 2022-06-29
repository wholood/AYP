#include <iostream>
#include <math.h>

using namespace std;

int main (){
    int binario, decimal=0;

    cout<<"Ingrese su numero binario de 4 digitos: \t";
    cin>>binario;
    
    //Multiplicaremos la ultima cifra correspondiente a la potencia base 2 de su posición
    decimal+=(binario%10)* pow(2,0); 
    binario/=10; 
    decimal+=(binario%10)* pow(2,1);
    binario/=10;
    decimal+=(binario%10)* pow(2,2);
    binario/=10;
    decimal+=binario* pow(2,3);

    cout<<"Su numero en sistema decimal es: "<<decimal<<endl;
    return 0;
}