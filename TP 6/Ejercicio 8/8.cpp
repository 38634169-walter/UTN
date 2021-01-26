#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int cliente, entrenamiento,tipo,tiempo,minutos,horas,maxTiempo=0,maxTiempoCliente;
int cont=0;
int totalEntrenamiento[50]={};
int tipoEntrenamientos[]={1,2,3,4,5,6,7,8,9,10};


cout<<"--Numero de Entrenamiento: ";
cin>>entrenamiento;
while(entrenamiento<1 || entrenamiento>9999){
    cout<<"Reingresar número de Entrenamiento: ";
    cin>>entrenamiento;
}


while(entrenamiento!=0){

    cout<<"--Cliente: ";
    cin>>cliente;
    while(cliente<101||cliente>150){
        cout<<"Reingresar cliente: ";
        cin>>cliente;
    }

    cout<<"--Tipo de Entrenamiento: ";
    cin>>tipo;
    while(tipo<1||tipo>10){
        cout<<"Reingresar tipo de Entrenamiento: ";
        cin>>tipo;
    }
    cout<<"--Tiempo del Entrenamiento: ";
    cin>>tiempo;


    totalEntrenamiento[cliente-101]+=tiempo;

    for(int i=0;i<10;i++){
        if(tipoEntrenamientos[i]==tipo){
            cont++;
            while(i<10){
                tipoEntrenamientos[i]=tipoEntrenamientos[i+1];
                i++;
            }
        }

    }









    cout<<"\n\n-----------------------------------------------\n";
    cout<<"--Numero de Entrenamiento: ";
    cin>>entrenamiento;
    while(entrenamiento<0 || entrenamiento>9999){
        cout<<"Reingresar número de Entrenamiento: ";
        cin>>entrenamiento;
    }





}



for(int i=0;i<50;i++){
    minutos=totalEntrenamiento[i]%60;
    horas=totalEntrenamiento[i]/60;
    cout<<"\n\nCliente numero: "<<101+i<<endl;
    cout<<"Tiempo total de entrenamiento: "<<horas<<"hs "<<minutos<<"min"<<endl;
    if(totalEntrenamiento[i]>maxTiempo){
        maxTiempo=totalEntrenamiento[i];
        maxTiempoCliente=i+101;
    }
}

cout<<"\n\n-------------------------------------------------------\n";
cout<<"-Cliente que mas tiempo entreno: "<<maxTiempoCliente<<endl;
cout<<"\n-------------------------------------------------------\n";

for(int i=0;i<10-cont;i++){
    cout<<tipoEntrenamientos[i]<<", ";
}



getch();
return 0;
}
