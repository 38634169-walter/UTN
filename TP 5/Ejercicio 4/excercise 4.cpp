#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int planta, legajo,dia,edad,cantidad, actPlanta;
char sexo, zona;

//A
int contMenores35=0;

//B
int maxProduccionZN=0,maxProduccionZS=0,maxProduccionZO=0, maxplantaZN,maxplantaZS,maxplantaZO;


//C
int maxCantidad=0,maxLegajo,maxPlanta;
char maxZona;

//D
float porcentajeZN, porcentajeZS, porcentajeZo;
int acuZonaN=0,acuZonaS=0,acuZonaO=0;


cout<<"Numero de planta";
cin>>planta;


while(planta!=0){

    //B
    int acuCantidadZN=0,acuCantidadZS=0,acuCantidadZO=0;

    //C
    int maxCantidadPlanta=0,maxLegajoPlanta,maxPlantaPlanta;
    char maxZonaPlanta;

    actPlanta=planta;
    while(planta==actPlanta){

        cout<<"Legajo del operario: ";
        cin>>legajo;
        cout<<"Dia: ";
        cin>>dia;
        cout<<"Edad: ";
        cin>>edad;
        cout<<"Sexo: ";
        cin>>sexo;
        cout<<"Cantidad de productos fabricados en el día: ";
        cin>>cantidad;
        cout<<"Zona de ubicacion de la planta: ";
        cin>>zona;

        //A
        if(edad>=1 && edad<35 && dia>=1 && dia<=15){
            contMenores35++;
        }


        //B-D
        switch(zona){
            case 'N': acuCantidadZN+=cantidad;acuZonaN+=cantidad;break;
            case 'S': acuCantidadZS+=cantidad;acuZonaS+=cantidad;break;
            case 'O': acuCantidadZO+=cantidad;acuZonaO+=cantidad;break;
        }

        //C
        if (cantidad>maxCantidadPlanta){
            maxCantidadPlanta=cantidad;
            maxLegajoPlanta=legajo;
            maxPlantaPlanta=planta;
            maxZonaPlanta=zona;
        }



        cout<<"Número de planta";
        cin>>planta;




    }


    //B
    if(acuCantidadZN>maxProduccionZN){
        maxProduccionZN=acuCantidadZN;
        maxplantaZN=actPlanta;
    }
    if(acuCantidadZS>maxProduccionZS){
        maxProduccionZS=acuCantidadZS;
        maxplantaZS=actPlanta;
    }
    if(acuCantidadZO>maxProduccionZO){
        maxProduccionZO=acuCantidadZO;
        maxplantaZO=actPlanta;
    }

    //C

    if(maxCantidadPlanta>maxCantidad){
        maxCantidad=maxCantidadPlanta;
        maxLegajo=maxLegajoPlanta;
        maxPlanta=maxPlantaPlanta;
        maxZona=maxZonaPlanta;
    }



}

cout<<"\n\n--------------------------------------------------------------\n";
cout<<"Cantidad de productos fabricados por menores de 35: "<<contMenores35<<endl;
cout<<"El numero de planta de zona norte que mas producto producio: "<<maxplantaZN<<endl;
cout<<"El numero de planta de zona sur que mas producto producio: "<<maxplantaZS<<endl;
cout<<"El numero de planta de zona oeste que mas producto producio: "<<maxplantaZO<<endl;
cout<<"Legajo del empleado que mas productos fabrico en un dia: "<<maxLegajo<<endl;
cout<<"Planta del empleado que mas productos fabrico en un dia: "<<maxPlanta<<endl;
cout<<"Zona del empleado que mas productos fabrico en un dia: "<<maxZona;
cout<<"\n--------------------------------------------------------------\n";

  //D
porcentajeZN=((float)acuZonaN/(acuZonaN+acuZonaO+acuZonaS))*100;
porcentajeZS=((float)acuZonaS/(acuZonaN+acuZonaO+acuZonaS))*100;
porcentajeZo=((float)acuZonaO/(acuZonaN+acuZonaO+acuZonaS))*100;

cout<<"\n\n--------------------------------------------------------------\n";
cout<<"Porcentaje de produccion Zona Norte: "<<porcentajeZN<<"%"<<endl;
cout<<"Porcentaje de produccion Zona Sur: "<<porcentajeZS<<"%"<<endl;
cout<<"Porcentaje de produccion Zona Oeste: "<<porcentajeZo<<"%";
cout<<"\n--------------------------------------------------------------\n";


getch();
return 0;
}
