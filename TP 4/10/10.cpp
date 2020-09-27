#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num, num_artista=1, integrantes, jornada, duracion_show, b1=0, artShowLargo_j1,showLargo_j1, contSol_j1=0, contSol_j2=0, contSol_j3=0, jor_larga, acu_minJ1, acu_minJ2, acu_minJ3;
int cont_artistas=0, promedio_art;
string jornada_larga;


cout<<"\n\n\n INGRESAR LOS SIGUIENTES DATOS: \n\n";
    cout<<"\n NUMERO DE ARTISTA: ";
    cin>>num_artista;
    cout<<"\n CANTIDAD DE INTEGRANTES: ";
    cin>>integrantes;
    cout<<"\n NUMERO DE JORNADA: ";
    cin>>jornada;
    cout<<"\n DURACION DEL SHOW EN MINUTOS: ";
    cin>>duracion_show;

while(num_artista!=0){

    cont_artistas++;
    if (jornada==1){
        acu_minJ1+=duracion_show;
        if(!b1){
            showLargo_j1=duracion_show;
            artShowLargo_j1=num_artista;
            b1=1;
        }
        else{
            if(duracion_show>showLargo_j1){
                showLargo_j1=duracion_show;
                artShowLargo_j1=num_artista;
            }
        }
    }

    if (jornada==1&& integrantes==1){
        contSol_j1++;
    }
    if(jornada==2&&integrantes==1){
        contSol_j2++;
    }
    if(jornada==3&&integrantes==1){
        contSol_j3++;
    }

    if(jornada==2){
        acu_minJ2+=duracion_show;
    }
    if(jornada==3){
        acu_minJ3+=duracion_show;
    }


    cout<<"\n\n\n INGRESAR LOS SIGUIENTES DATOS: \n\n";
    cout<<"\n NUMERO DE ARTISTA: ";
    cin>>num_artista;
    cout<<"\n CANTIDAD DE INTEGRANTES: ";
    cin>>integrantes;
    cout<<"\n NUMERO DE JORNADA: ";
    cin>>jornada;
    cout<<"\n DURACION DEL SHOW EN MINUTOS: ";
    cin>>duracion_show;


}


if(acu_minJ1>acu_minJ2){
    jor_larga=acu_minJ1;
    jornada_larga="Jornada 1";
}
else{
    jor_larga=acu_minJ2;
    jornada_larga="Jornada 2";
}
if(acu_minJ3>jor_larga){
    jor_larga=acu_minJ3;
    jornada_larga="Jornada 3";
}


promedio_art=(acu_minJ1+acu_minJ2+acu_minJ3)/cont_artistas;


cout<<"\n\n-------------------------------------------------------------------------------------------\n";
cout<<"NUMERO DE ARTISTA CON EL SHOW MAS LARGO: "<<artShowLargo_j1<<endl;
cout<<"CANTIDAD DE ARTISTAS DE LA JORNADA 1: "<<contSol_j1<<endl;
cout<<"CANTIDAD DE ARTISTAS DE LA JORNADA 2: "<<contSol_j2<<endl;
cout<<"CANTIDAD DE ARTISTAS DE LA JORNADA 3: "<<contSol_j3<<endl;
cout<<"JORADA MAS EXTENSA FUE: "<<jornada_larga<<endl;
cout<<"DURACION PROMEDIO DE SHOW POR ARTISTA: "<<promedio_art<<endl;



getch();
return 0;
}
