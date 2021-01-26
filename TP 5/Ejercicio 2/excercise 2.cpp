#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int peso;

//B

int maxCamion, maxContEncomiendas=0,camion=0;


cout<<"Ingresar peso de encomienda: ";
cin>>peso;


while(peso>=0){

    //A
    int acuPeso=0;
    camion++;

    //B
    int contEncomiendas=0;

    while(acuPeso+peso<=200&&peso>=0){
        //A
        acuPeso+=peso;
        //B
        contEncomiendas++;

        cout<<"Ingresar peso de encomienda: ";
        cin>>peso;
    }

    if(contEncomiendas>maxContEncomiendas){
        maxContEncomiendas=contEncomiendas;
        maxCamion=camion;
    }
cout<<"\n---------------------------------------------------------------\n";
cout<<"Numero de camion: "<<camion<<endl;
cout<<"Peso total de encomiendas: "<<acuPeso;
cout<<"\n---------------------------------------------------------------\n\n";


}
cout<<"\n---------------------------------------------------------------\n";
cout<<"Numero de camion que transporta mas encomiendas: "<<maxCamion;
cout<<"\n---------------------------------------------------------------\n\n";

getch();
return 0;
}
