#include<iostream>
#include<conio.h>

using namespace std;

void buscar(int,int[],int);


int main(){

int valor_buscado, tam=10;
int vNum[10]={1,9,4,7,3,8,7,10,18,16};


cout<<"\n-----------------------------\n";
cout<<"Numero a buscar en el vector: ";
cin>>valor_buscado;
cout<<"-----------------------------";


buscar(valor_buscado,vNum,tam);


getch();
return 0;
}



void buscar(int valor, int v[], int tam){
    bool esta=false;


    for(int i=0;i<tam; i++){

        if(valor==v[i]){
            esta=true;
        }
    }


    cout<<"\n\nEl numero esta en el vectro: ";

    if(esta==true){
        cout<<"SI";
    }
    else{
        cout<<"NO";
    }


}
