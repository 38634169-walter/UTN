#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int e1,e2,e3,e4,e5;
float a1,a2,a3,a4,a5;

int con_edad=0,pm30,cant_entre_edades=0,e20=0,e30=0,e40=0;
float pro,con_alt_prom=0;

int main(){
cout<<"----------------------------------------------------------------------"<<endl;
cout<<"***INGRESAR EDAD EDAD Y ALTURA DE LA PRIMERA PERSONA***"<<endl<<endl;
cout<<"Edad:";
cin>>e1;
cout<<"Altura:";
cin>>a1;
cout<<endl<<"----------------------------------------------------------------------"<<endl<<endl<<endl;
cout<<"***INGRESAR EDAD EDAD Y ALTURA DE LA PRIMERA SEGUNDA***"<<endl<<endl;
cout<<"Edad:";
cin>>e2;
cout<<"Altura:";
cin>>a2;
cout<<"----------------------------------------------------------------------"<<endl<<endl<<endl;
cout<<"***INGRESAR EDAD EDAD Y ALTURA DE LA PRIMERA TERCERA***"<<endl<<endl;
cout<<"Edad:";
cin>>e3;
cout<<"Altura:";
cin>>a3;
cout<<endl<<"----------------------------------------------------------------------"<<endl<<endl<<endl;
cout<<"***INGRESAR EDAD EDAD Y ALTURA DE LA PRIMERA CUARTA***"<<endl<<endl;
cout<<"Edad:";
cin>>e4;
cout<<"Altura:";
cin>>a4;
cout<<endl<<"----------------------------------------------------------------------"<<endl<<endl<<endl;
cout<<"***INGRESAR EDAD EDAD Y ALTURA DE LA PRIMERA QUINTA***"<<endl<<endl;
cout<<"Edad:";
cin>>e5;
cout<<"Altura:";
cin>>a5;
cout<<endl<<"----------------------------------------------------------------------"<<endl<<endl<<endl;


if(e1>=30&&a1>=1.8){
    con_edad++;
}
if(e2>=30&&a2>=1.8){
    con_edad++;
}
if(e3>=30&&a3>=1.8){
    con_edad++;
}
if(e4>=30&&a4>=1.8){
    con_edad++;
}
if(e5>=30&&a5>=1.8){
    con_edad++;
}


cout<<"La cantidad de personas mayores de 30 años que miden mas de 1.8 es: "<<con_edad<<endl<<endl;



if (e1>=30){
    con_alt_prom+=a1;
    pm30++;
}
if (e2>=30){
    con_alt_prom+=a2;
    pm30++;
}
if (e3>=30){
    con_alt_prom+=a3;
    pm30++;
}
if (e4>=30){
    con_alt_prom+=a4;
    pm30++;
}
if (e5>=30){
    con_alt_prom+=a5;
    pm30++;
}

pro=con_alt_prom/pm30;

cout<<"El promedio de altura de las personas mayores de 30 años es: "<<pro<<endl<<endl;

if (a1>=1.7&&a1<=1.8){
    cant_entre_edades++;
    }
if (a2>=1.7&&a2<=1.8){
    cant_entre_edades++;
    }
if (a3>=1.7&&a3<=1.8){
    cant_entre_edades++;
    }
if (a4>=1.7&&a4<=1.8){
    cant_entre_edades++;
    }
if (a5>=1.7&&a5<=1.8){
    cant_entre_edades++;
    }
cout<<"Las cantidad de personas que miden entre 1.7 y 1.8 es: "<<cant_entre_edades<<endl<<endl;

if (e1==20){
    e20++;
}

if (e1==30){
    e30++;
}
if (e1==40){
    e40++;
}

if (e2==20){
    e20++;
}

if (e2==30){
    e30++;
}
if (e2==40){
    e40++;
}
if (e3==20){
    e20++;
}

if (e3==30){
    e30++;
}
if (e3==40){
    e40++;
}
if (e4==20){
    e20++;
}

if (e4==30){
    e30++;
}
if (e4==40){
    e40++;
}
if (e5==20){
    e20++;
}

if (e5==30){
    e30++;
}
if (e5==40){
    e40++;
}

cout<<"Las personas de 20 años de edad son: "<<e20<<endl<<endl;
cout<<"Las personas de 30 años de edad son: "<<e30<<endl<<endl;
cout<<"Las personas de 40 años de edad son: "<<e40<<endl<<endl;

return 0;
}
