#include<iostream>
#include<conio.h>
#include<stdio.h>


using namespace std;

int main(){

int lis,num,cont;

cout<<"Introducir cantidad de numeros a ingresar en la lista: ";
cin>>lis;

for(int x=0;x<lis;x++){

    cout<<"\n\n Introduci numero de la lista: ";
    cin>>num;
    if(num>0){
        cont++;
    }
}

cout<<"\n\n----------------------------------------------------\n Son positivos: "<<cont<<" Numeros de los ingresados\n----------------------------------------------------";

getch();
return 0;
}
