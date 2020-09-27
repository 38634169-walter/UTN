#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int con_bla=45,con_neg=50,con_mar=40,con_gri=49;
int can1,can2,can3,color1,color2,color3;
cout<<"--------------------------------------------------------------------------------------"<<endl<<endl;
cout<<"ingresar cantidad de conejos a comprar: ";
cin>>can1;
cout<<"ingresar el numero del color del conejo: "<<endl<<endl<<endl<<"1-blanco"<<endl<<"2-negro"<<endl<<"3-marron"<<endl<<"4-gris"<<endl<<endl;
cout<<"color: ";
cin>>color1;
cout<<"--------------------------------------------------------------------------------------"<<endl<<endl;


cout<<"ingresar cantidad de conejos a comprar: ";
cin>>can2;
cout<<"ingresar el numero del color del conejo: "<<endl<<endl<<endl<<"1-blanco"<<endl<<"2-negro"<<endl<<"3-marron"<<endl<<"4-gris"<<endl<<endl;
cout<<"color: ";
cin>>color2;
cout<<"--------------------------------------------------------------------------------------"<<endl<<endl;


cout<<"ingresar cantidad de conejos a comprar: ";
cin>>can3;
cout<<"ingresar el numero del color del conejo: "<<endl<<endl<<endl<<"1-blanco"<<endl<<"2-negro"<<endl<<"3-marron"<<endl<<"4-gris"<<endl<<endl;
cout<<"color: ";
cin>>color3;
cout<<"--------------------------------------------------------------------------------------"<<endl<<endl;


int totalcan= can1+can2+can3;
cout<<"la cantidad de conejos vendidos es: "<<totalcan<<endl<<endl;


switch(color1){

case 1: con_bla-=can1;break;
case 2: con_neg-=can1;break;
case 3: con_mar-=can1;break;
case 4: con_gri-=can1;break;
default: "error al introducir color de conejo";break;
}


switch(color2){
case 1: con_bla-=can2;break;
case 2: con_neg-=can2;break;
case 3: con_mar-=can2;break;
case 4: con_gri-=can2;break;
default: "error al introducir color de conejo";break;
}



switch(color3){
case 1: con_bla-=can3;break;
case 2: con_neg-=can3;break;
case 3: con_mar-=can3;break;
case 4: con_gri-=can3;break;
default: "error al introducir color de conejo";break;
}


cout<<"**La cantidad de conejos que quedaron es**"<<endl<<endl;
cout<<"Blanco: "<<con_bla<<endl;
cout<<"Negro: "<<con_neg<<endl;
cout<<"Marron: "<<con_mar<<endl;
cout<<"Gris: "<<con_gri<<endl;
cout<<endl<<endl;

cout<<"Los conejos que no se vendieron fueron:"<<endl<<endl;

if(con_bla==45){
cout<<"Blanco,";
}
if(con_neg==50){
cout<<"Negro,";
}
if(con_mar==40){
cout<<"Marron,";
}
if(con_gri==49){
cout<<"Gris";
}













getch();
return 0;
}
