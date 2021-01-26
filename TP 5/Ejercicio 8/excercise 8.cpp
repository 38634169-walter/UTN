#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int num;

//A
int x, maxPorcentajeNum;
float maxPorcentaje=0;
//C
int contOrdenados=0;



for(x=1;x<=10;x++){

    //A
    int contImpares=0, contNumeros=0;
    float porcentaje;
    //B
    int ultNumPrimo=0, ultNumPrimoUbicacion=0;
    bool hubo=false;
    //C
    int numAnt, b1=0;

    cout<<"Ingresar numero: ";
    cin>>num;


    while(num!=0){


        //A
        contNumeros++;
        if(num%2!=0&&num>0){
            contImpares++;
        }

        //B
        int contPrimo=0;
        for(int i=1;i<=num;i++){
            if(num%i==0){
                contPrimo++;
            }
        }
        if(contPrimo==2){
            ultNumPrimo=num;
            ultNumPrimoUbicacion=contNumeros;
            hubo=true;
        }

        //C

        if(!b1){
            numAnt=num;
            b1=1;
        }
        else{
            numAnt=num;
        }
        if(numAnt<num){
            contOrdenados++;
        }



        cout<<"Ingresar numero: ";
        cin>>num;

    }
    //A
    porcentaje=contImpares/contNumeros*100;
    if(porcentaje>maxPorcentaje){
        maxPorcentaje=porcentaje;
        maxPorcentajeNum=x;
    }

    //B
    if(hubo==true){
        cout<<"-Ultimo número primo: "<<ultNumPrimo<<endl;
        cout<<"-Orden en el que aparecio: "<<ultNumPrimoUbicacion<<endl;
    }
    else{
        cout<<"\n\n*****No hubo numero primo*****\n\n"<<endl;
    }



}

//A
cout<<"Número de grupo con mayor porcentaje de números impares positivos: "<<maxPorcentajeNum<<endl;
//C
cout<<"Cantidad de grupos ordenados de mayor a menor: "<<contOrdenados<<endl<<endl;



getch();
return 0;
}
