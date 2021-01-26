#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int empleado,dia, hTrabajadas;
float sueldo;
float vHora[80]={};
float vHoraExtra[80]={};
int horasTrabajadas[80]={};
int horasExtraTrabajadas[80]={};



for(int i=0;i<80;i++){
    cout<<"-Numero de empleado: ";
    cin>>empleado;
    while(empleado<1||empleado>80){
        cout<<"-Reingresar numero de empleado: ";
        cin>>empleado;
    }
    cout<<"-Valor de hora de trabajo: ";
    cin>>vHora[empleado-1];
    cout<<"-Valor de la hora extra: ";
    cin>>vHoraExtra[empleado-1];
}


cout<<"-Ingresar numero de empleado: ";
cin>>empleado;
while(empleado<1||empleado>80){
    cout<<"-Reingresar numero de empleado: ";
    cin>>empleado;
}

while(empleado!=0){
    int horasExtra=0;
    cout<<"-Dia: ";
    cin>>dia;
    cout<<"-Total de horas trabajadas en el dia: ";
    cin>>hTrabajadas;

    if(hTrabajadas<=9){
        horasTrabajadas[empleado-1]+=hTrabajadas;
    }
    else{
        horasExtra=hTrabajadas-9;
        horasTrabajadas[empleado-1]+=9;
        horasExtraTrabajadas[empleado-1]+=horasExtra;

    }


    cout<<"-Ingresar numero de empleado: ";
    cin>>empleado;
    while(empleado<0||empleado>80){
        cout<<"-Reingresar numero de empleado: ";
        cin>>empleado;

    }

}


for(int i=0;i<80;i++){
    if(horasTrabajadas[i]!=0){
        sueldo=horasExtraTrabajadas[i]*vHoraExtra[i]+horasTrabajadas[i]*vHora[i];
        cout<<"\nEmpleado numero: "<<i+1<<endl;
        cout<<"Sueldo: $"<<sueldo<<endl;
    }
}



getch();
return 0;
}
