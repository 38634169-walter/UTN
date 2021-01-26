#include<iostream>
#include<conio.h>

using namespace std;

void buscar(char[],char,int&);


int main(){

char valor_buscado='a';
char cadena[15]={'h','o','l','a',' ','c','o','m','o',' ','e','s','t','a','s'};
int cantidad=0;


cout<<"\n\nCaracter a buscar: ";
cin>>valor_buscado;

buscar(cadena,valor_buscado,cantidad);

cout<<"\n\nAPARECE: "<<cantidad<<" veces";



getch();
return 0;
}



void buscar(char v[], char buscado, int&cant){

for(int i=0;i<15;i++){
    if(v[i]==buscado){
        cant++;
    }

}

}
