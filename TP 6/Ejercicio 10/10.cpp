#include<iostream>
#include<conio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int num;
bool numeros[100]={};

//2 parte
int ganador1, ganador2;

//A
float recaudado=0.0;
//B
bool gano1=false,gano2=false;
string ganancia;
float neto=0.0;
//C
int contVendidos=0;
//D
int nGanador1,nGanador2;

cout<<"Introducir numero a comprar: ";
cin>>num;
while(num<0||num>99){
    cout<<"Reingresar número a comprar: ";
    cin>>num;
}

while(num!=-1){


    numeros[num]=true;
    //A
    recaudado+=500;
    //C
    contVendidos+=1;


    cout<<"Introducir numero a comprar: ";
    cin>>num;
    while(num<-1||num>99||numeros[num]==true){
        cout<<"Reingresar número a comprar: ";
        cin>>num;
    }


}

//2 parte
srand(time(NULL));
ganador1=0+rand()%(99-0+1);
ganador2=0+rand()%(99-0+1);


//B-D
for(int i=0;i<99;i++){

    if(i==ganador1){
        nGanador1=i;
        if(numeros[i]==true){
            gano1=true;
        }
    }
    if(i==ganador2){
        nGanador2=i;
        if(numeros[i]==true){
            gano2=true;
        }
    }
}

//B
neto=recaudado;
if(gano1==true){
    neto-=30000;
}
if(gano2==true){
    neto-=5000;
}
if(recaudado<0){
    ganancia="-Ganancia";
}
else{
    ganancia="-Perdida";
}

cout<<"\n\n---------------------------------------------------------------\n";
//A
cout<<"-Total recaudado: $"<<recaudado<<endl;
//B
cout<<ganancia<<" fue de $"<<neto<<endl;
//C
contVendidos=100-contVendidos;
cout<<"-Porcentaje de numeros no vendidos: "<<(float(contVendidos)/100)*100<<"%"<<endl;
//D
cout<<"-Numero ganador del primer premio: "<<nGanador1<<endl<<"Hubo ganador: ";
if (gano1==true){
    cout<<"Si"<<endl;
}
else{
    cout<<"No"<<endl;
};

cout<<"-Numero ganador del segundo premio: "<<nGanador2<<endl<<"Hubo ganador: ";
if (gano2==true){
    cout<<"Si"<<endl;
}
else{
    cout<<"No"<<endl;
}
cout<<"\n---------------------------------------------------------------\n\n";

getch();
return 0;
}
