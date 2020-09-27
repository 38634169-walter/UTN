#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int sueldo_max,sueldo,legajo_maximo,legajo,b;

for(int x=0;x<10;x++){

    cout<<"\n\n-Ingresar legajo del empleado: ";
    cin>>legajo;
    cout<<"\n-Ingresar sueldo del empleado: $";
    cin>>sueldo;

    if(!b){
        sueldo_max=sueldo;
        legajo_maximo=legajo;
        b=1;
    }
    else if (sueldo>sueldo_max){
            sueldo_max=sueldo;
            legajo_maximo=legajo;
    }

}

cout<<"\n\n-----------------------------------------------------------------\nEl legajo con el sueldo mas alto es: "<<legajo_maximo<<"\n-----------------------------------------------------------------\n\n";



getch();
return 0;
}
