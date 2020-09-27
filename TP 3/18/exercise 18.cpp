#include<iostream>
#include<conio.h>

using namespace std;


int main(){

int x,num_movimiento,dia,acu_extraccion=0,acu_deposito=0,b=0,dia_max_dep,num_mov_max_dep,acu_dia_10=0,porc_extraccion,porc_deposito;
char tipo;
float importe,saldo_inicial,deposito_max;

cout<<"\n\n-INGRESAR SALDO INICIAL DE LA CUENTA DE LADY LARA: ";
cin>>saldo_inicial;


for(x=1;x<=3;x++){
    cout<<"\n\n------------------------------------------------\n-Ingresar numero de movimiento: ";
    cin>>num_movimiento;
    cout<<"-Ingresar numero de dia: ";
    cin>>dia;
    cout<<"-Ingresar tipo de movimiento: \n\n\n         E- Extraccion           D- Deposito";
    tipo=getch();
    cout<<"\n-Ingresar importe: ";
    cin>>importe;
    cout<<"------------------------------------------------";

    switch (tipo){
        case 'E': acu_extraccion++;saldo_inicial-=importe;break;
        case 'D': acu_deposito++;saldo_inicial+=importe;break;
        default: "Tipo de movimiento erroneo seleccione alguna opcion";break;
    }
    if (tipo=='D'){
        if(!b){
            deposito_max=importe;
            dia_max_dep=dia;
            num_mov_max_dep=num_movimiento;
            b=1;
        }
        else if(importe>deposito_max){
            deposito_max=importe;
            dia_max_dep=dia;
            num_mov_max_dep=num_movimiento;
        }
    }

    if(dia==10){
        acu_dia_10++;
    }

}


porc_deposito=(acu_deposito/x)*100;
porc_extraccion=(acu_extraccion/x)*100;

cout<<"\n\n******************************************************\n-Saldo final: "<<saldo_inicial<<"\n-Porcentaje de deposito: "<<porc_deposito<<"\n-Porcentaje de extraccion: "<<porc_extraccion<<"\n-El deposito de mayor importe es: "<<deposito_max<<"\n   -Fue en el dia: "<<dia_max_dep<<"\n   -El numero de movimiento: "<<num_mov_max_dep<<"\n-Cantidad de movimientos de dia 10: "<<acu_dia_10<<"\n******************************************************\n\n";


getch();
return 0;
}
