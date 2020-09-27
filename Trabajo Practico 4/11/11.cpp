#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int numero_venta, cant_butacas, cant_butacasTotal=0, butacasSinVender=1200;
float totalRecaudado;


cout<<"\n\nINGRESE DATOS DEL TICCKET: \n\n";
cout<<"-INGRESAR NUMERO DE VENTA: ";
cin>>numero_venta;
cout<<"\n-INGRESAR CANTIDAD DE BUTACAS: ";
cin>>cant_butacas;


while(numero_venta!=0 && cant_butacasTotal<=1200){


    cant_butacasTotal+=cant_butacas;

    totalRecaudado+=cant_butacas*5000.00;

    butacasSinVender-=cant_butacas;

    cout<<"\n\nINGRESE DATOS DEL TICCKET: \n\n";
    cout<<"-INGRESAR NUMERO DE VENTA: ";
    cin>>numero_venta;
    cout<<"\n-INGRESAR CANTIDAD DE BUTACAS: ";
    cin>>cant_butacas;

}

cout<<"\n\n-----------------------------------------------------------------------\n";
cout<<"TOTAL RECAUDADO: $"<<totalRecaudado<<endl;
cout<<"CANTIDAD DE BUTACAS SIN VENDER: "<<butacasSinVender<<endl;
cout<<"-----------------------------------------------------------------------\n\n";

getch();
return 0;

}
