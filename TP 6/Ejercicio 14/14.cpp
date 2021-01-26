#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int cont=0;
int cinco[5]={};
int diez[10]={};
int unionn[15]={};


cout<<"\n\n----------------------------------------------------\n\n";
for(int i=0;i<5;i++){
    cout<<"Ingresar los 5 numeros: ";
    cin>>cinco[i];
}
cout<<"\n\n----------------------------------------------------\n\n";

for(int i=0;i<10;i++){
    cout<<"Ingresar los 10 numeros: ";
    cin>>diez[i];
}
cout<<"\n\n----------------------------------------------------\n\n";

for(int i=0;i<5;i++){
    unionn[i]=cinco[i];
    cont++;
}

for(int i=0;i<10;i++){
    unionn[cont]=diez[i];
    cont++;
}

cout<<"ARREGLO UNIDO: ";

for(int i=0;i<15;i++){
    cout<<unionn[i]<<", ";
}



getch();
return 0;
}
