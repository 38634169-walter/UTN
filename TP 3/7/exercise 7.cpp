#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int b1=0,b2=0,cont=0,acu=0;
float sueldo, promedio,maxi,mini;

for(int x=0;x<10;x++){

    cout<<"\n -Ingresa un sueldo: ";
    cin>>sueldo;

    if(!b1){
        maxi=sueldo;
        b1=1;
    }
    else if(sueldo>maxi){
        maxi=sueldo;
    }
        else if (!b2){
            mini=sueldo;
            b2=1;
        }
            else if (sueldo<mini){
                mini=sueldo;
            }
acu+=sueldo;

if (sueldo>50000){
    cont++;
}

}

promedio=acu/10;

cout<<"\n\n-------------------------------------------------------------\n-El sueldo mayor es: $"<<maxi<<"\n-El sueldo menor es: $"<<mini<<"\n-Promedio de sueldos: $"<<promedio<<"\n-Cantidad de sueldos mayores a $50.000: "<<cont<<"\n-------------------------------------------------------------\n\n";







getch();
return 0;
}
