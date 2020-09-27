#include<iostream>
#include<conio.h>


using namespace std;


int main(){

int num_dia,b_temp_max=0,b_temp_min=0,num_dia_tempmax,acu_dias_neblina=0,acu_lluvia=0,acu_no_lluvia=0;
float temperatura,milimetros_lluvia,viento_km,visibilidad,temp_max,temp_min,amplitud_termica;
string resp_lluvia;

for(int x=0;x<3;x++){

    cout<<"\n\n   *********************INGRESA LOS SIGUIENTES DATOS*********************\n\n\n\n-Numero de dia: ";
    cin>>num_dia;
    cout<<"-Temperatura: ";
    cin>>temperatura;
    cout<<"-Milimetros de lluvia: ";
    cin>>milimetros_lluvia;
    cout<<"-Viento en Km/h: ";
    cin>>viento_km;
    cout<<"-Visibilidad en km: ";
    cin>>visibilidad;
    cout<<"--------------------------------------------------------------------------";

    if(!b_temp_max){
        num_dia_tempmax=num_dia;
        temp_max=temperatura;
        b_temp_max=1;
    }
    else if(temperatura>temp_max){
        if(!b_temp_min){
            temp_min=temp_max;
            b_temp_min=1;
        }
        else{
            temp_max=temperatura;
            num_dia_tempmax=num_dia;
        }
    }
    else if(!b_temp_min){
        temp_min=temperatura;
        b_temp_min;
    }
    else if (temperatura<temp_min){
        temp_min=temperatura;
    }

    if (visibilidad<=2.0){
        acu_dias_neblina++;
    }

    if(milimetros_lluvia!=0){
        acu_lluvia++;
    }
    else{
        acu_no_lluvia++;
    }
}

amplitud_termica=temp_max-temp_min;
if(acu_lluvia>acu_no_lluvia){
    resp_lluvia="Quincena lluviosa";
}
else if (acu_no_lluvia/acu_lluvia>=3){
    resp_lluvia="Quincena humeda";
}
else{
    resp_lluvia="Quincena seca";
}

cout<<"\n\n---------------------------------------------------------\n-El dia con temperatura maxima fue: "<<num_dia_tempmax<<"\n-La amplitud termica fue de: "<<amplitud_termica<<"\n-Cantidad de dias con neblina: "<<acu_dias_neblina<<"\n-Tipo de clima durante la quincena: "<<resp_lluvia<<"\n---------------------------------------------------------\n\n";

getch();
return 0;
}
