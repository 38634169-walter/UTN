#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int tecla=2;
float metros;


while(metros!=0){

cout<<"\n\n-------------------------------------------------------\n";
cout<<"********************MENU PRINCIPAL********************\n\n\n";
cout<<"Ingresar medida en metros::";
cin>>metros;
cout<<"\n1-Convertir a centimetros\n\n";
cout<<"2-Convertir a kilometros\n\n";
cout<<"3-Convertir a pulgadas\n\n";
cout<<"4-Convertir a pies\n\n";
cout<<"0-Para salir del programa\n";
cout<<"\n-------------------------------------------------------\n\n";

cout<<"Ingrese opcion: ";
cin>>tecla;
cout<<"EL RESULTADO ES: ";

switch(tecla){
case 1: cout<<metros*100<<" centimetros";break;
case 2: cout<<metros/1000<<" kilometros";break;
case 3: cout<<metros*39.37<<" pulgadas";break;
case 4: cout<<metros*3.281<<" pies";break;
default: cout<<"ERROR- Datos de conversion mal ingresados";break;
}
cout<<"\n-----------------------------------------------\n\n";
getch();
}
getch();
return 0;
}
