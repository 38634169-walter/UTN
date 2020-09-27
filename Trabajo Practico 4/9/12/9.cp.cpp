#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int legajo, materia, cont_estu=0, legajo_menN, cont_mat10=0, b1=0;
float nota, acu_notas=0, prom_notas, menor_nota, porcentaje_apr=0, porcentaje_desapr=0, aprobados=0, desaprobados=0;

cout<<"n\n\n-INGRESAR LEGAJO DEL ESTUDIANTE: ";
cin>>legajo;
cout<<"\n-INGRESAR CODIGO DE LA MATERIA: ";
cin>>materia;
cout<<"\n-INGRESAR NOTA DE LA MATERIA: ";
cin>>nota;


while(legajo<=30000){

    cont_estu++;
    acu_notas+=nota;

    if(!b1){
        menor_nota=nota;
        legajo_menN=legajo;
        b1=1;
    }
    else{
        if(nota<menor_nota){
            menor_nota=nota;
            legajo_menN=legajo;
        }
    }

    if(materia==10){
       cont_mat10++;
    }

    if(nota>=6){
        aprobados++;
    }
    else{
        if(nota<6 && nota>=0){
            desaprobados++;
        }
        else{
            cout<<"\n\n***ERROR- datos de notas mal ingreados***";
        }
    }
    cout<<"\n*************************************************\n";
    cout<<"-INGRESAR LEGAJO DEL ESTUDIANTE: ";
    cin>>legajo;
    cout<<"\n-INGRESAR CODIGO DE LA MATERIA: ";
    cin>>materia;
    cout<<"\n-INGRESAR NOTA DE LA MATERIA: ";
    cin>>nota;
    cout<<"\n*************************************************\n\n";





}

prom_notas=acu_notas/cont_estu;

porcentaje_apr=aprobados/cont_estu*100;
porcentaje_desapr=desaprobados/cont_estu*100;


cout<<"\n\n----------------------------------------------------------------------------------------------\n";
cout<<"-EL PROMEDIO DE LA NOTA DE TODOS LOS ESTUDIANTES ES: "<<prom_notas<<endl;
cout<<"-EL LEGAJO CON MENOR NOTA ES: "<<legajo_menN<<endl;
cout<<"-LA CANTIDAD DE EXAMENES RENDIDOS PARA LA MATERIA 10 ES: "<<cont_mat10<<endl;
cout<<"-PORCENTAJE DE ESTUDIANTES DESAPROBADOS: "<<porcentaje_desapr<<"%"<<endl;
cout<<"-PORCENTAJE DE ESTUADIANTES APROBADOS: "<<porcentaje_apr<<"%"<<endl;
cout<<"\n----------------------------------------------------------------------------------------------\n\n";





getch();
return 0;}
