#include <iostream>
#include <conio.h>
#include <stdio.h>    //para usar con printf y scanf

using namespace std;


int main(){
char L;
int horas, total,t;
bool urgente;

cout<<endl<<endl<<"INGRESAR TIPO DE LENGUAJE A USAR: ";
cin>>L;
cout<<endl<<endl<<"'INGRESE LA CANTIDAD DE HORAS QUE DEMANDA EL PROYECTO: ";
cin>>horas;
cout<<endl<<endl<<"EL PROYECTO SE SOLICITA CON URGENCIA: "<<endl<<endl<<"   1-Si        2-no   ";




if (kbhit()){
    char tecla=getch();
        if (tecla=='1'){
            urgente=true;
        }
        else
        if(tecla=='2') {
         urgente=false;
        }
        else{"ingresado mal"; }
    }

switch (L){

case'c': total=2500*horas;break;

case '#': total=2100*horas;break;

case 'P': total=1400*horas;break;

case 'G': total=2000*horas;break;

default: cout<<"error al introducir lenguaje";break;

}

if (urgente==true){

    total=total*2.20;
}



cout<<endl<<endl<<endl<<"----------------------------------------------------";
cout<<endl<<endl<<"Costo total del proyecto: $"<< total;
cout<<endl<<"----------------------------------------------------";




return 0;
}
