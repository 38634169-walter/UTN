#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int articulo,cantidad;;
int ingresados[15]={};
int stock[15]={};
int stockV[15]={};

//A
int totalVendidos[15]={};
//B
int articulosSinStock[15]={};
int contArtSinStock=0;
//C
int artMasMitad[15]={};
int contMasMitad=0;


for(int i=0;i<15;i++){

    cout<<"-Ingresar numero de articulo: ";
    cin>>articulo;
    while(articulo==ingresados[articulo-1]||articulo<1||articulo>15){
        cout<<"-Reingresar numero de articulo: ";
        cin>>articulo;
    }
    ingresados[articulo-1]=articulo;

    cout<<"-Ingresar stock: ";
    cin>>stock[articulo-1];
}

for(int i=0;i<15;i++){
    stockV[i]=stock[i];
}





cout<<"\n\n*************VENTA DE ARTICULOS*************\n\n";


cout<<"-Ingresar numero de articulo: ";
cin>>articulo;
while(articulo<1||articulo>15){
    cout<<"-Reingresar numero de articulo: ";
    cin>>articulo;
}

while(articulo!=0){


    cout<<"-Ingresar cantidad vendida: ";
    cin>>cantidad;


    //A
    if(stockV[articulo-1]>=cantidad){
        stockV[articulo-1]-=cantidad;
        totalVendidos[articulo-1]+=cantidad;
    }
    else{
        if(stockV[articulo-1]<cantidad){
            cout<<"--CANTIDAD DE STOCK INSUFICIENTE QUEDAN SOLAMENTE "<<stockV[articulo-1]<<" ARTICULOS--";
        }
    }

    //B
    if(stockV[articulo-1]==0){
        articulosSinStock[contArtSinStock]=articulo;
        contArtSinStock++;
    }





    cout<<"-Ingresar numero de articulo: ";
    cin>>articulo;
    while(articulo<0||articulo>15){
        cout<<"-Reingresar numero de articulo: ";
        cin>>articulo;
    }



}


//C
for(int i=0;i<15;i++){
    if(float(stockV[i])<float(stock[i])/2){
        artMasMitad[contMasMitad]=i+1;
        contMasMitad++;

    }

}






cout<<"\n\n----------------------------------------------------------\n";
//A
cout<<"\n*********CANTIDADES VENDIDAS DE CADA ARTICULO*********\n\n";

for(int i=0;i<15;i++){

    cout<<"Numero de articulo: "<<i+1<<" vendidos "<<totalVendidos[i]<<endl<<endl;
}
//B
cout<<"\n\n-Articulos sin stock: ";
for(int i=0;i<contArtSinStock;i++){
    cout<<articulosSinStock[i]<<", ";
}
//C
cout<<"\n\n-Articulos que el stock disminuyo mas de la mitad: ";
for(int i=0;i<contMasMitad;i++){
    cout<<artMasMitad[i]<<", ";
}

cout<<"\n----------------------------------------------------------\n";



getch();
return 0;
}
