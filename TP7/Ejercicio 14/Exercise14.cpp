#include<iostream>
#include<conio.h>

using namespace std;


void buscar(int, int[],int&);

int main(){
int cont=0;
int valor_buscado;
int v[]={8,3,9,2,6,2,5,9,2,8};


cout<<"\n\nINGRESAR NUMERO A BUSCAR: ";
cin>>valor_buscado;


buscar(valor_buscado,v,cont);

cout<<"\n\nCantidad de veces que aparece: "<<cont;

getch();
return 0;
}


void buscar(int valor, int v[], int&cont){


    for(int i=0;i<10;i++){
        if(valor==v[i]){
            cont++;
        }
    }


}
