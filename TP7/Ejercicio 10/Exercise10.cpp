#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;

////VIDEO ANGEL NUM 13.... 2hs 10 min

void semana(int,char[]);



int main(){

int dia;
char nombre[20]={};

cout<<"Introducir numero de dias: ";
cin>>dia;

semana(dia,nombre);

cout<<"Nombre del dia:";

for(int i=0;i<20;i++){
    cout<<nombre[i];
}

getch();
return 0;
}



void semana(int dia, char nom[]){

    switch(dia){
        case 0:  strcpy(nom,"Domingo");break;
        case 1:  strcpy(nom,"Lunes");break;
        case 2:  strcpy(nom,"Martes");break;
        case 3:  strcpy(nom,"Miercoles");break;
        case 4:  strcpy(nom,"Jueves");break;
        case 5:  strcpy(nom,"Viernes");break;
        case 6:  strcpy(nom,"Sabado");break;
        default: strcpy(nom,"Error");break;
    }


}
