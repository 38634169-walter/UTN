#include<iostream>
#include<conio.h>

using namespace std;

int main(){
int asistentes, cantidad_salas=0;

cout<<"INGRESAR CANTIDAD DE ASISTENTES A LA REUNION:";
cin>>asistentes;

while(asistentes!=0){

    if(asistentes-60>=0){
        cantidad_salas++;
        asistentes-=60;
    }
    else{
        if(asistentes>0)
            cantidad_salas++;
            asistentes=0;
    }
}

cout<<"\n\n------------------------------------------------------------\n";
cout<<"CANTIDAD DE SALAS NECESARIAS: "<<cantidad_salas<<endl;
cout<<"------------------------------------------------------------\n\n";
getch();
return 0;

}
