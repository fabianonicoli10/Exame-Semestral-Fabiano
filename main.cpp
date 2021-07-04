#include <iostream>
#include "propriedadesgeometricas.h"
#include <fstream>
float x=0,y=0,z=0;

int main() {


 cout<<"Digite o um lado do triangulo"<<endl;
 cin>>x;
 cout<<"Digite outro lado do triangulo"<<endl;
 cin>>y;
 cout<<"Digite mais um lado do triangulo"<<endl;
 cin>>z;

 cout<<" "<<endl;
cout<<"****************************"<<endl;
 cout<<" "<<endl;

using namespace std;


  ofstream saida;
  ifstream entrada;
  string texto = " ";

  saida.open("arquivo.txt", ios::out);
  saida<<"O perimetro do triangulo e: "<< propgeo::perimetro(x,y,z)<<endl;

  saida<<"A hipotenusa do triângulo e: " <<propgeo::hipotenusa(x,y,z)<<endl;

  saida<<"A area do triangulo e: "<< propgeo::area(x,y,z);

  saida.close();


  entrada.open ("arquivo.txt", ios::in);
  while (!entrada.eof())
  {
    entrada>>texto;
    cout<<texto<<" ";
  }
  entrada.close();



}
