#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num, contC=0, contP=0, contN=0;

for(int x=0;x<10;x++){

    cout<<"\n\n Ingresa 1 numero: ";
    cin>>num;

    if(num==0){
               contC++;
        }
    else if (num<0){
        contN++;
        }
        else{
            contP++;
        }
}

cout<<"\n\n----------------------------------------\n-Cantidad de positivos: "<<contP<<endl<<"-Cantidad de negativos: "<<contN<<endl<<"-Cantidad de ceros: "<<contC<<"\n----------------------------------------\n\n";

getch();
return 0;
}
