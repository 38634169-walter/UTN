#include<iostream>
#include<conio.h>



using namespace std;


int main(){

int x, pelicula, clasificacion, nSocio, tipo, dia, actPelicula;
char genero,sexo;
float costo;

//A
int contA=0,contC=0,contT=0,maxCont;
string maxAlquilada;
//B
int maxPF=0, maxPM=0,maxClasificacionF, maxClasificacionM;
//C
float promedio1, promedio2, promedio3,acuTipo1=0.0, acuTipo2=0.0,acuTipo3=0.0,totalTotal=0.0;
//D



cout<<"Numero de pelicula: ";
cin>>pelicula;
while(pelicula<1000||pelicula>2000){
    cout<<"Numero de pelicula: ";
    cin>>pelicula;
}


while(pelicula!=0){

    //B
    int contPeliculasM=0, contPeliculasF=0, antClasificacion;

    //D
    int contPeliculas=0;
    float total=0;
    //E
    int contF=0,contM=0;
    float promedioM,promedioF;


    actPelicula=pelicula;
    while(pelicula==actPelicula){

        cout<<"Genero de la pelicula: ";
        cin>>genero;
        while(toupper(genero)!='A'&&toupper(genero)!='T'&&toupper(genero)!='C'){
            cout<<"Reingresar genero de la pelicula: ";
            cin>>genero;
        }
        cout<<"Calificacion de la pelicula: ";
        cin>>clasificacion;
        while(clasificacion!=0&&clasificacion!=13&&clasificacion!=16){
            cout<<"Reingresar calificacion de la pelicula: ";
            cin>>clasificacion;
        }
        cout<<"Numero de socio que alquilo la pelicula: ";
        cin>>nSocio;
        while(nSocio<1||nSocio>500){
            cout<<"Reingresar numero de socio que alquilo la pelicula: ";
            cin>>nSocio;
        }
        cout<<"Sexo del socio: ";
        cin>>sexo;
        while(toupper(sexo)!='M'&&toupper(sexo)!='F'){
            cout<<"Reingresar sexo del socio: ";
            cin>>sexo;
        }
        cout<<"Tipo de socio: ";
        cin>>tipo;
        while(tipo!=1&&tipo!=2&&tipo!=3){
            cout<<"Reingresar tipo de socio: ";
            cin>>tipo;
        }
        cout<<"Dia del alquiler: ";
        cin>>dia;
        while(dia<1||dia>30){
            cout<<"Reingresar dia del alquiler: ";
        cin>>dia;
        }
        cout<<"Costo del alquiler: ";
        cin>>costo;




        //A
        if(tipo=='A'||tipo=='a'){
            contA++;
        }
        else{
            if(tipo=='C'||tipo=='c'){
                contC++;
            }
            else{
                if(tipo=='T'||tipo=='t'){
                    contT++;
                }
            }

        }

        //B
        antClasificacion=clasificacion;
        if(dia>=1&&dia<=15 && sexo=='M'|| sexo=='m'){
            contPeliculasM++;
        }
        else{
            if(dia>=1&&dia<=15 && sexo=='F'|| sexo=='f'){
                contPeliculasF++;
            }
        }

        //C
        if(tipo==1){
            acuTipo1+=costo;
        }
        else{
            if(tipo==2){
                acuTipo2+=costo;
            }
            else{
                if(tipo==3){
                acuTipo3+=costo;
                }
            }
        }


        //D
        total+=costo;
        contPeliculas++;

        //E
        if(sexo=='F'||sexo=='f'){
            contF++;
        }
        else{
            if(sexo=='M'||sexo=='m'){
                contM++;
            }
        }


        cout<<"Numero de pelicula: ";
        cin>>pelicula;



    }

    //B
    if (contPeliculasF>maxPF){
        maxPF=contPeliculasF;
        maxClasificacionF=antClasificacion;
    }
    if(contPeliculasM>maxPM){
        maxPM=contPeliculasM;
        maxClasificacionM=antClasificacion;
    }
    //C
    totalTotal+=total;


    //D
    if(contPeliculas>15){
        cout<<"\n\n----------------------------------------------------------\n";
        cout<<"---Pelicula alquilada mas de 15 veces---"<<endl;
        cout<<"\n-Numero: "<<actPelicula<<endl;
        cout<<"-Total recaudado: $"<<total<<endl;
        cout<<"-Clasificacion: "<<antClasificacion;
        cout<<"\n----------------------------------------------------------\n";
    }

    //E

    promedioF=((float)contF/(contF+contM))*100;
    promedioM=((float)contM/(contF+contM))*100;
    cout<<"\n\n----------------------------------------------------------\n";
    cout<<"-Porcentaje de mujeres que compro esta pelicula fue: "<<promedioF<<"%"<<endl;
    cout<<"-Porcentaje de hombres que compraron esta pelicula fue: "<<promedioM<<"%";
    cout<<"\n----------------------------------------------------------\n";


}


//A

if(contA>contC){
    maxCont=contA;
    maxAlquilada="De Accion";
}
else{
    maxCont=contC;
    maxAlquilada="De Comedia";
}
if(contT>maxCont){
    maxAlquilada="De Terror";
}

//C

promedio1=((float)acuTipo1/totalTotal)*100;
promedio2=((float)acuTipo2/totalTotal)*100;
promedio3=((float)acuTipo3/totalTotal)*100;

cout<<"\n\n----------------------------------------------------------\n";
cout<<"Genero de la peliula mas alquilada: "<<maxAlquilada<<endl;
cout<<"Clasificacion de la paliculada mas solicitada por mujeres: "<<maxClasificacionF<<endl;
cout<<"Clasificacion de la paliculada mas solicitada por hombres: "<<maxClasificacionM<<endl;
cout<<"promedio socios Tipo 1: "<<promedio1<<"%"<<endl;
cout<<"promedio socios Tipo 2: "<<promedio2<<"%"<<endl;
cout<<"promedio socios Tipo 3: "<<promedio3<<"%";
cout<<"\n----------------------------------------------------------\n";

getch();
return 0;
}
