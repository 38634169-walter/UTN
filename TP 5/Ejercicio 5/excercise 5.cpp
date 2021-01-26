#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");


int sucursal,dia,tipoDia,tipoCombustible,actSucursal;
float importe,litros;


//B
int maxImporteSucursal;
float maxImporte=0;

//C
float acuRecaudacionQ1=0,acuRecaudacionQ2=0;

//D
int acuGeneralCombustible1=0,acuGeneralCombustible2=0,acuGeneralCombustible3=0,acuGeneralCombustible4=0;



cout<<"Número de Sucursal: ";
cin>>sucursal;
while(sucursal<1||sucursal>15){
    cout<<"Número de Sucursal: ";
    cin>>sucursal;
}


while (sucursal!=0){

    //A
    int acuCombustible1=0,acuCombustible2=0,acuCombustible3=0,acuCombustible4=0,maxCombustible=0;;
    string maxCombustibleNom;
    //E
    int maxVentaCombustible=0, maxVentaTipoDia=0;
    float maxVenta=0;
    string maxVentaCombustibleNom;

    actSucursal=sucursal;
    while(actSucursal==sucursal){

        cout<<"Día de la venta: ";
        cin>>dia;
        while(dia<1||dia>30){
            cout<<"Día de la venta: ";
            cin>>dia;
        }
        cout<<"Tipo de día: ";
        cin>>tipoDia;
        while(tipoDia!=1&&tipoDia!=2){
            cout<<"Tipo de día: ";
            cin>>tipoDia;
        }
        cout<<"Tipo de combustible vendido: ";
        cin>>tipoCombustible;
        while(tipoCombustible!=1&&tipoCombustible!=2&&tipoCombustible!=3&&tipoCombustible!=4){
            cout<<"Tipo de combustible vendido: ";
            cin>>tipoCombustible;
        }
        cout<<"Importe de la venta: ";
        cin>>importe;
        cout<<"Litros vendidos: ";
        cin>>litros;


        //A
        switch(tipoCombustible){
            case 1:acuCombustible1+=litros;if(tipoDia==1){acuGeneralCombustible1+=litros;};break;
            case 2:acuCombustible2+=litros;if(tipoDia==1){acuGeneralCombustible2+=litros;};break;
            case 3:acuCombustible3+=litros;if(tipoDia==1){acuGeneralCombustible3+=litros;};break;
            case 4:acuCombustible4+=litros;if(tipoDia==1){acuGeneralCombustible4+=litros;};break;

        }

        //B
        if(importe>maxImporte){
            maxImporte=importe;
            maxImporteSucursal=sucursal;
        }

        //C
        if(dia>=1&&dia<=15){
            acuRecaudacionQ1+=importe;
        }
        else{
            if(dia>15&&dia<=30){
                acuRecaudacionQ2+=importe;
            }
        }

        //D
        if(importe>maxVenta){
            maxVenta=importe;
            maxVentaCombustible=tipoCombustible;
            maxVentaTipoDia=tipoDia;
        }



        cout<<"Número de Sucursal: ";
        cin>>sucursal;
        while(sucursal<1&&sucursal>15){
            cout<<"Número de Sucursal: ";
            cin>>sucursal;
        }


    }

    //A
    if(acuCombustible1>acuCombustible2){
        maxCombustible=acuCombustible1;
        maxCombustibleNom="Extra";
    }
    else{
        maxCombustible=acuCombustible2;
        maxCombustibleNom="Super";
    }
    if(acuCombustible3>maxCombustible){
        maxCombustible=acuCombustible3;
        maxCombustibleNom="Comun";
    }
    if(acuCombustible4>maxCombustible){
        maxCombustible=acuCombustible4;
        maxCombustibleNom="Gasoil";
    }

    //E
    switch(maxVentaCombustible){
    case 1: maxVentaCombustibleNom="Extra";break;
    case 2: maxVentaCombustibleNom="Super";break;
    case 3: maxVentaCombustibleNom="Comun";break;
    case 4: maxVentaCombustibleNom="Gasoil";break;
    }


    //A
    cout<<"\n\n----------------------------------------------------------\n";
    cout<<"*****Combustible mas vendido*****\n\n";
    cout<<"-Combustible: "<<maxCombustibleNom<<endl;
    cout<<"-Cantidad de litros: "<<maxCombustible<<endl<<endl;
    //E
    cout<<"*****Venta individual de mayor importe*****\n\n";
    cout<<"-Combustible: "<<maxVentaCombustibleNom<<endl;
    cout<<"-Tipo de dia: "<<maxVentaTipoDia;
    cout<<"\n----------------------------------------------------------\n";


}

//B
cout<<"\n\n----------------------------------------------------------\n";
cout<<"*****Sucursal con mayor recaudacion total*****\n\n";
cout<<"Sucursal: "<<maxImporteSucursal<<endl;
cout<<"Importe recaudado: "<<maxImporte<<endl<<endl;////////MAL////////
//C
cout<<"*****Recaudacion Total de todas las sucursales*****\n\n";
cout<<"Primera quincena: "<<acuRecaudacionQ1<<endl;
cout<<"Segunda quincena: "<<acuRecaudacionQ2<<endl<<endl;
//D
cout<<"*****Cantidad total de litros vendidos durante los días hábiles*****\n\n";
cout<<"Extra: "<<acuGeneralCombustible1<<endl;
cout<<"Super: "<<acuGeneralCombustible2<<endl;
cout<<"Comun: "<<acuGeneralCombustible3<<endl;
cout<<"Gasoil: "<<acuGeneralCombustible4;
cout<<"\n----------------------------------------------------------\n";

getch();
return 0;
}
