/*Calcular la distancia euclidiana entre dos puntos
((PPx1-PPx2)+(PPy1-PPy2))^1/2
*/
#include<iostream>
#include<math.h>
using namespace std;

int main (){
    //Declaramos las variables a usar
    float Px1,Px2,Py1,Py2,output;

    cout<<"Ingrese las coordenadas del punto 1 Px1 y Py1 en orden: "<<endl;
    cin>>Px1>>Py1;

    cout<<"Ingrese las coordenadas del punto 2 Px2 y Py2 en orden:"<<endl;
    cin>>Px2>>Py2;

    //operamos
    output= pow(pow((Px1-Px2),2) + pow((Py1-Py2),2),1.0/2.0);
        //((PPx1-PPx2)+(PPy1-PPy2))^1/2
    ///mostramos
    cout<<"La distancia euclidiana entre los puntos P1 ("<<Px1<<", "<<Py1<<") y P2 ("<<Px2<<", "<<Py2<<")es: "<<endl;
    cout<<output<<endl;
    
    return 0;
}
