#include <iostream>
#include <conio.h>

using namespace std;

int main(){

float total,pre, alquiler=10000,caramelo=0.5,totall;
int can_caramelos,produccion=0;
cout<<"\n\n\n\nINTRODUCIR PRESUPUESTO INICIAL: $";
cin>>pre;
cout<<"\n\nINGRESAR CANTIDAD DE CARAMELOS ESPECULADA PARA PRODUCIR EL PRIMER MES: "<<endl<<endl;
cin>>can_caramelos;

total=alquiler+(caramelo*can_caramelos);

if (can_caramelos>=1000){

    produccion=can_caramelos/1000;
    total+=produccion*5000;
}


if(total>pre){

    totall=total-pre;
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    cout<<"El presupuesto no es suficiente, necesita un credito de: $"<<totall;
    cout<<"\n-----------------------------------------------------------------------------------------"<<endl<<endl<<endl;
}

if(total<=pre){
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    cout<<"El presupuesto es suficiente para cubrir los costos de: $"<<total;
    cout<<"\n-----------------------------------------------------------------------------------------"<<endl<<endl<<endl;
}


getch();
return 0;
}
