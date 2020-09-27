#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num, con_par=0, ant_1=0, ant_2=0,b1=0, ternas=0;
bool inicio;

while(con_par!=5){
    cout<<"INGRESAR NUMERO: ";
    cin>>num;
    inicio=true;

    if(num%2==0){
        con_par++;
    }

    if(ant_1<0&&ant_2<0&&num<0){
        ternas++;
        ant_1=0;
        ant_2=0;
        b1=0;
        inicio=false;
    }

    if(inicio==true){
        if(!b1){
            ant_1=num;
            b1=1;
        }
        else{
            ant_2=ant_1;
            ant_1=num;
        }
    }
}
cout<<"\n---------------------------------------------------------------\n";
cout<<"CANTIDAD DE NUMEROS TERNARIOS: "<<ternas;
cout<<"\n---------------------------------------------------------------\n";
getch();
return 0;
}
