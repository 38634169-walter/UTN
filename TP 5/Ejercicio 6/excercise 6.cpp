#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int sucursal, dia, tipoCombustible,tipoPago, actSucursal;
float importe, litros;
char ubicacion, tipoDia;


//B
float maxImporteT1=0,maxImporteT2=0,maxImporteP1=0,maxImporteP2=0,maxImporteD1=0,maxImporteD2=0;
int maxSucursalT1,maxSucursalT2,maxSucursalP1,maxSucursalP2,maxSucursalD1,maxSucursalD2;

//C
float acuTotal1Q1=0,acuTotal1Q2=0,acuTotal2Q1=0,acuTotal2Q2=0,acuTotal3Q1=0,acuTotal3Q2=0;

//D
float acuLitrosTicket1=0,acuLitrosTicket2=0,acuLitrosTicket3=0,acuLitrosTicket4=0;





cout<<"Número de Sucursal: ";
cin>>sucursal;
while(sucursal<1||sucursal>30){
    cout<<"Reingresar número de Sucursal: ";
    cin>>sucursal;
}


while(sucursal!=0){

    //A
    float acuLitros1=0,acuLitros2=0,acuLitros3=0,acuLitros4=0, maxLitros;
    string maxTipoCombustible;


    //B
    float acuT=0,acuP=0,acuD=0;


    //E
    float maxImporte=0;
    int maxImporteCombustible;
    string maxImporteCombustibleL;

    actSucursal=sucursal;
    while(actSucursal==sucursal){

        cout<<"Día de la venta: ";
        cin>>dia;
        while(dia<1||dia>30){
            cout<<"Reingresar día de la venta: ";
            cin>>dia;
        }
        cout<<"Tipo de día: "<<endl<<        "H-Hábil        F-Fin de Semana";
        cin>>tipoDia;
        while(tipoDia!='H'||tipoDia!='F'){
            cout<<"Reingresar tipo de día: "<<endl<<        "H-Hábil        F-Fin de Semana";
            cin>>tipoDia;
        }
        cout<<"Tipo de combustible vendido: "<<endl<<"   1-Extra    2-Súper    3-Común    4-Gasoil";
        cin>>tipoCombustible;
        while(tipoCombustible<1||tipoCombustible>5){
            cout<<"Tipo de combustible vendido: "<<endl<<"   1-Extra    2-Súper    3-Común    4-Gasoil";
            cin>>tipoCombustible;
        }
        cout<<"Importe de la venta: ";
        cin>>importe;
        cout<<"Litros vendidos: ";
        cin>>litros;
        cout<<"Tipo de pago: "<<endl<<"      1-Efectivo      2-Tarjeta      3-Ticket";
        cin>>tipoPago;
        while(tipoPago<1||tipoPago>3){
            cout<<"Reingresar tipo de pago: "<<endl<<"      1-Efectivo      2-Tarjeta      3-Ticket";
            cin>>tipoPago;
        }
        cout<<"Ubicación de la Sucursal: "<<endl<<"     D- Don Torcuato      T- Tigre      P -Pacheco";
        cin>>ubicacion;
        while(ubicacion!='D'||ubicacion!='T'||ubicacion!='P'){
            cout<<"Reingresar ubicación de la Sucursal: "<<endl<<"     D- Don Torcuato      T- Tigre      P -Pacheco";
            cin>>ubicacion;
        }

        //A-D
        switch(tipoCombustible){
        case 1: if(tipoPago==1||tipoPago==2){acuLitros1+=litros;};if(tipoPago==3&&tipoDia=='H'){acuLitrosTicket1+=litros;};break;
        case 2:if(tipoPago==1||tipoPago==2){acuLitros2+=litros;};if(tipoPago==3&&tipoDia=='H'){acuLitrosTicket2+=litros;};break;
        case 3:if(tipoPago==1||tipoPago==2){acuLitros3+=litros;};if(tipoPago==3&&tipoDia=='H'){acuLitrosTicket3+=litros;};break;
        case 4:if(tipoPago==1||tipoPago==2){acuLitros4+=litros;};if(tipoPago==3&&tipoDia=='H'){acuLitrosTicket4+=litros;};break;
        }

        //B
        switch(ubicacion){
            case 'T': acuT+=importe;break;
            case 'P': acuP+=importe;break;
            case 'D': acuD+=importe;break;
        }


        //C
        switch(tipoPago){
        case 1:if(dia>=1&&dia<=15){acuTotal1Q1+=importe;};if(dia>15&&dia<=30){acuTotal1Q2;};break;
        case 2:if(dia>=1&&dia<=15){acuTotal2Q1+=importe;};if(dia>15&&dia<=30){acuTotal2Q2;};break;
        case 3:if(dia>=1&&dia<=15){acuTotal3Q1+=importe;};if(dia>15&&dia<=30){acuTotal3Q2;};break;
        }

        //E
        if(importe>maxImporte){
            maxImporte=importe;
            maxImporteCombustible=tipoCombustible;
        }







        cout<<"Número de Sucursal: ";
        cin>>sucursal;
        while(sucursal<1||sucursal>30){
            cout<<"Reingresar número de Sucursal: ";
            cin>>sucursal;
        }





    }

    //A

    if(acuLitros1>acuLitros2){
        maxLitros=acuLitros1;
        maxTipoCombustible="Extra";
    }
    else{
        maxLitros=acuLitros2;
        maxTipoCombustible="Super";
    }
    if(acuLitros3>maxLitros){
        maxLitros=acuLitros3;
        maxTipoCombustible="Comun";
    }
    if(acuLitros4>maxLitros){
        maxLitros=acuLitros4;
        maxTipoCombustible="Gasoil";
    }

    //B

    if(acuT>maxImporteT1){
        maxImporteT2=maxImporteT1;
        maxImporteT1=acuT;
        maxSucursalT2=maxImporteT1;
        maxSucursalT1=actSucursal;
    }
    else{
        if(acuT>maxImporteT2){
            maxImporteT2=acuT;
            maxSucursalT2=actSucursal;
        }
    }

    if(acuP>maxImporteP1){
        maxImporteP2=maxImporteP1;
        maxImporteP1=acuP;
        maxSucursalP2=maxSucursalP1;
        maxSucursalP1=actSucursal;
    }
    else{
        if(acuP>maxImporteP2){
            maxImporteP2=acuP;
            maxSucursalP2=actSucursal;
        }
    }
    if(acuD>maxImporteD1){
        maxImporteD2=maxImporteD1;
        maxImporteD1=acuD;
        maxSucursalD2=maxSucursalD1;
        maxSucursalD1=actSucursal;
    }
    else{
        if(acuD>maxImporteD2){
            maxImporteD2=acuD;
            maxSucursalD2=actSucursal;
        }
    }

    //E
    if (maxImporteCombustible==1){
        maxImporteCombustibleL="Extra";
    }
    else{
        if(maxImporteCombustible==2){
            maxImporteCombustibleL="Super";
        }
        else{
            if (maxImporteCombustible==3){
                maxImporteCombustibleL="Comun";
            }
            else{
                if(maxImporteCombustible==4){
                    maxImporteCombustibleL="Gasoil";
                }
            }
        }
    }



    cout<<"Maximo tipo de combustible vendido: "<<maxTipoCombustible<<endl;
    cout<<"*****Venta individual con mayor importe*****"<<endl;
    cout<<"Combustible: "<<maxImporteCombustibleL<<endl;
    cout<<"Importe: "<<maxImporte<<endl;




}

cout<<"*****SUCURSALES CON MAYOR RECAUDACION Y SEGUNDA MAYOR RECAUDACION*****"<<endl<<endl;
cout<<"Mayor recaudacion en Tigre: "<<maxImporteT1<<endl;
cout<<"Segunda mayor recaudacion en Tigre: "<<maxImporteT2<<endl;
cout<<"Mayor recaudacion en Don Torcuato: "<<maxImporteD1<<endl;
cout<<"Segunda mayor recaudacion en Don Torcuato: "<<maxImporteD2<<endl;
cout<<"Mayor recaudacion en Pacheco: "<<maxImporteP1<<endl;
cout<<"Segunda mayor recaudacion en Pacheco: "<<maxImporteP2<<endl;
cout<<"*****Recaudacion total para la primera quincena*****"<<endl<<endl;
cout<<"Efectivo:"<<acuTotal1Q1<<endl;
cout<<"Tarjeta:"<<acuTotal2Q1<<endl;
cout<<"Ticket:"<<acuTotal3Q1<<endl;
cout<<"*****Recaudacion total para la segunda quincena*****"<<endl<<endl;
cout<<"Efectivo:"<<acuTotal1Q2<<endl;
cout<<"Tarjeta:"<<acuTotal2Q2<<endl;
cout<<"Ticket:"<<acuTotal3Q2<<endl;
cout<<"*****Cantidad de litros vendidas con ticket durante los dias hábiles*****"<<endl<<endl;
cout<<"Extra: "<<acuLitrosTicket1<<endl;
cout<<"Super: "<<acuLitrosTicket2<<endl;
cout<<"Comun: "<<acuLitrosTicket3<<endl;
cout<<"Gasoil: "<<acuLitrosTicket4<<endl;


getch();
return 0;
}
