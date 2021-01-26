#include<iostream>
#include<conio.h>

using namespace std;


void posicionVaorMaximo(int,int[],int&);



int main(){

int posicion;
int tam=10;
int vNum[tam]={1,6,2,9,5,4,26,78,98,34};


posicionVaorMaximo(tam,vNum,posicion);

cout<<"\n\nEl numero mayor en el vector es: "<<posicion;


getch();
return 0;
}

void posicionVaorMaximo(int tam, int v[],int&posicion){

    for(int i=0;i<tam;i++){

        if(i==0){
            posicion=v[i];
        }
        else{
            if(v[i]>posicion){
                posicion=v[i];
            }
        }
}

}

