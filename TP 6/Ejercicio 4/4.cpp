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

cout<<"Número de venta: ";
cin>>venta;
cout<<"Número de día: ";
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


        cout<<"Número de venta: ";
        cin>>venta;
        cout<<"Número de día: ";
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
cout<<"Número de día que más se recaudó en total: "<<diaMaxImporte<<endl;
cout<<"Su recaudación: $"<<maxImporteDia;
cout<<"\n--------------------------------------------------------------\n";





getch();
return 0;
}
