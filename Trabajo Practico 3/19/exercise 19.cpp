#include<iostream>
#include<conio.h>


using namespace std;


int main(){

int b=0,b2=0,par,primo,num;

for(int x=0;x<10;x++){
    int acu=0;
    cout<<"\n\n-Ingresar un numero: ";
    cin>>num;

    if (num%2==0){
        if(!b){
            par=num;
            b=1;
        }
    }

    for(int j=1;j<=num;j++){
        if(num%j==0){
            acu++;
        }
    }
    if(acu==2){
        if(!b2){
            primo=num;
            b2=1;
        }
    }
}

cout<<"\n\n-------------------------------------------------\n-Primer numero par: "<<par<<"\n-Primer numero primo: "<<primo<<"\n-------------------------------------------------\n\n";

getch();
return 0;
}
