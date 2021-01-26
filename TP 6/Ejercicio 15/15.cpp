#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");
int cont=0;
int cinco[5]={};
int diez[10]={};
int interseccion[15]={};
bool ingresadosCinco[5]={};
bool ingresadosDiez[10]={};




for(int i=0;i<5;i++){
    cout<<"Ingesar los 5 numeros: ";
    cin>>cinco[i];
    while(ingresadosCinco[cinco[i]]==true){
        cout<<"Reingesar los 5 numeros: ";
        cin>>cinco[i];
    }
    ingresadosCinco[cinco[i]]=true;
}

for(int j=0;j<10;j++){
    cout<<"-Ingresar los 10 numeros: ";
    cin>>diez[j];
    while(ingresadosDiez[diez[j]]==true){
        cout<<"-Reingresar los 10 numeros: ";
        cin>>diez[j];
    }
    ingresadosDiez[diez[j]]=true;
}


for(int i=0;i<5;i++){

    for(int x=0;x<10;x++){
        if(cinco[i]==diez[x]){
            interseccion[cont]=cinco[i];
            cont++;
        }
    }
}

cout<<"Valores en comun de ambas listas: ";
for(int i=0;i<cont;i++){
    cout<<interseccion[i]<<", ";
}








getch();
return 0;
}
