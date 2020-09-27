#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num,b1=0,b2=0,min_P,max_N;

for(int x=0;x<10;x++){

    cout<<"\n\n-Ingrese un numero: ";
    cin>>num;

    if(num>0){
        if(!b1){
            min_P=num;
            b1=1;
        }
        else if (num<min_P){
            min_P=num;
        }
    }
    else if(num!=0){
        if(!b2){
            max_N=num;
            b2=1;
        }
        else if(num>max_N){
            max_N=num;
        }

    }
}

cout<<"\n\n--------------------------------------------------------\n-El minimo de los positivos es: "<<min_P<<"\n-El maximo de los negativos es: "<<max_N<<"\n--------------------------------------------------------\n\n";


getch();
return 0;
}
