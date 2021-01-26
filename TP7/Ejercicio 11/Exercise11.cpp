#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;


void cual(int,int,int,char[]);

int main(){

int dia,mes,hemisferio;
char estacion[20]={};

cout<<"Ingresar numero de dia: ";
cin>>dia;
cout<<"Ingresar numero de mes: ";
cin>>mes;
cout<<"Ingresar numero de hemisferio( 0-Sur, 1-Norte): ";
cin>>hemisferio;

cual(dia,mes,hemisferio,estacion);


cout<<"La estacion es: "<<estacion;


getch();
return 0;
}
/*///Hemisferio norte
Primavera: 21 marzo hasta 21 junio.
Verano: 21 junio hasta 21 septiembre.
Otoño: 21 septiembre hasta 21 Diciembre.
Invierno: 21 diciembre hasta 21 marzo.

//Hemisferio sur.
Otoño: 21 marzo hasta 21 junio.
Invierno: 21 junio hasta 21 septiembre.
Primavera: 21 septiembre hasta 21 Diciembre.
Verano: 21 diciembre hasta 21 marzo.
*/

void cual(int dia,int mes,int hemisferio, char estacion[]){
    int nro;


    if(hemisferio==1){
        if(dia>=21 && mes==3 || dia<21 && mes==6 || mes>3&&mes<6){
            strcpy(estacion,"Primavera");
        }
        if(dia>=21 && mes==6 || dia<21 && mes==9 || mes>6&&mes<9){
            strcpy(estacion,"Verano");
        }
        if(dia>=21 && mes==9 || dia<21 && mes==12 || mes>9&&mes<12){
            strcpy(estacion,"Otoño");
        }
        if(dia>=21 && mes==12 || dia<21 && mes==3 || mes<3){
            strcpy(estacion,"Invierno");
        }
    }
    else{
        if(hemisferio==0){
            if(dia>=21 && mes==3 || dia<21 && mes==6 || mes>3&&mes<6){
                strcpy(estacion,"Otoño");
            }
            if(dia>=21 && mes==6 || dia<21 && mes==9 || mes>6&&mes<9){
                strcpy(estacion,"Invierno");
            }
            if(dia>=21 && mes==9 || dia<21 && mes==12 || mes>9&&mes<12){
                strcpy(estacion,"Primavera");
            }
            if(dia>=21 && mes==12 || dia<21 && mes==3 || mes<3){
                strcpy(estacion,"Verano");
            }
        }
    }


}

