#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int venta,dia,actDia;
float importe;
//B
int diaMaxImporte;
float maxImporteDia=0.0;

cout<<"N�mero de venta: ";
cin>>venta;
cout<<"N�mero de d�a: ";
cin>>dia;

while(venta!=0){

    float importeDia=0.0;

    actDia=dia;
    while(actDia==dia&&venta!=0){

        cout<<"Importe de la venta: ";
        cin>>importe;


        if(importe>0){
            importeDia+=importe;
        }


        cout<<"N�mero de venta: ";
        cin>>venta;
        cout<<"N�mero de d�a: ";
        cin>>dia;
    }

    cout<<"\n\n--------------------------------------------------------------\n";
    cout<<"-Recaudacion total del dia: $"<<importeDia;
    cout<<"\n--------------------------------------------------------------\n";

    if(importeDia>maxImporteDia){
        maxImporteDia=importeDia;
        diaMaxImporte=actDia;
    }

}

cout<<"\n\n--------------------------------------------------------------\n";
cout<<"N�mero de d�a que m�s se recaud� en total: "<<diaMaxImporte<<endl;
cout<<"Su recaudaci�n: $"<<maxImporteDia;
cout<<"\n--------------------------------------------------------------\n";





getch();
return 0;
}
