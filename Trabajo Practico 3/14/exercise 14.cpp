#include<iostream>
#include<conio.h>

using namespace std;

int main (){

int num,cont;

cout<<"\n\n-Ingresar un numero: ";
cin>>num;

for(int x=1;x<=num;x++){

    if(num%x==0){
        cont++;
    }
}

cout<<"\n\n----------------------------------------------\n-La cantidad de divisores de "<<num<<" es: "<<cont<<"\n----------------------------------------------\n";

getch();
return 0;
}
