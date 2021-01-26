#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");


int provincia;
int zonas[24]={};
bool ingresados[24]={};

//A
int contZonas[9]={};


for(int i=0;i<24;i++){

    cout<<"-Ingresar numero de provincia: ";
    cin>>provincia;
    while(provincia<1||provincia>24||ingresados[provincia-1]==true){
        cout<<"Reingresar numero de provincia: ";
        cin>>provincia;
    }
    ingresados[provincia-1]=true;

    cout<<"-Numero de zona: ";
    cin>>zonas[provincia-1];
    while(zonas[provincia-1]<1||zonas[provincia-1]>9){
        cout<<"-Numero de zona: ";
        cin>>zonas[provincia-1];
    }


}

//A
for(int i=0;i<24;i++){

    for(int x=1;x<=9;x++){
        if(zonas[i]==x){
            contZonas[x-1]++;
        }
    }

}

cout<<"\n\n--------------------------------------------------------------\n";
//A-B
cout<<"***Zonas que abarcan mas de 3 provincias***"<<endl;
for(int i=0;i<9;i++){
    if(contZonas[i]>=3){
        cout<<"\nZona: "<<i+1<<" Abarca las provincias: ";
        for(int x=0;x<24;x++){
            if(zonas[x]==i+1){
                cout<<x+1<<", ";
            }
        }
    }
}
cout<<"\n--------------------------------------------------------------\n";



getch();
return 0;
}
