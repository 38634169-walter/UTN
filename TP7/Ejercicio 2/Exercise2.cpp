#include<iostream>
#include<conio.h>

using namespace std;


float redondeo(float);


int main(){

float num;
int redondeado;


cout<<"\nINGRESAR NUMERO CON COMA PARA REDONDEAR: ";
cin>>num;

redondeado=redondeo(num);

cout<<"\nNUMERO REDONDEDO: "<<redondeado;




getch();
return 0;
}


float redondeo(float redon){


if(redon-int(redon)<0.50){
    return int(redon);
}

else{
    return int(redon)+1;
}


}
