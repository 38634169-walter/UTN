#include<iostream>
#include<conio.h>

using namespace std;


void carga(int[],int);


int main(){

int vec[10]={};
int tam=10;


carga(vec,tam);

cout<<"\n\n";
for(int i=0;i<tam;i++){
    cout<<vec[i]<<" , ";
}


getch();
return 0;
}


void carga(int vec[],int t){

    cout<<"-Ingresar 10 numeros a cargar: ";
    for(int i=0;i<t;i++){

        cin>>vec[i];

    }

}
