#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int pos[100]={};
int neg[100]={};
int num,contPos=0,contNeg=0;

for(int i=0; i<100;i++){

    cout<<"INGRESAR NUMERO: ";
    cin>>num;
    if(num>0){
        pos[contPos]=num;
        contPos++;
    }
    else{
        if(num<0){
            neg[contNeg]=num;
            contNeg++;
        }
    }
}

cout<<"\n\n--------------------------------------------------------------\n";
cout<<"-Cantidad de numeros positivos: "<<contPos<<endl;
cout<<"Numeros del vector: ";
for(int i=0;i<contPos;i++){
    cout<<pos[i]<<", ";
}
cout<<"\n--------------------------------------------------------------\n";
cout<<"-Cantidad de numeros negativos: "<<contNeg<<endl;
cout<<"Numeros del vector: ";
for(int i=0; i<contNeg;i++){
    cout<<neg[i]<<", ";
}
cout<<"\n--------------------------------------------------------------\n\n";





getch();
return 0;
}
