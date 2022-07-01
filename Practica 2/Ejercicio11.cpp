/*Dadas las ecuaciones de dos rectas no paralelas Y1=m1*x+b1 y Y2=m2*x+b2
escriba un algoritmo que calcule su punto de interseccion*/

#include <iostream>

using namespace std;

int main(){
   int m1, m2, b1, b2, y, x;
   
   cout<<"ingrese m de la recta 1: "; cin>>m1;
   cout<<"ingrese m de la recta 2: "; cin>>m2;
   cout<<"ingrese b de la recta 1: "; cin>>b1;
   cout<<"ingrese b de la recta 2: "; cin>>b2;
   cout<<"ingrese x de las rectas: "; cin>>x;
   
   //sabiendo que las Y serán iguales en el punto de corte igualamos y despejamos ambas formulas
   //y1=m1*x+b1
   //X=b2-b/m2-m1= Y
   //en el punto de interseccion las Y seran iguales y las X tambien. entonxes X=Y
   
   y=(b2-b1)/(m2-m1);
   
   cout<<"Las curvas se interceptaran en: "<<y;
   
   return 0;
}