#include<iostream>
#include<conio.h>

using namespace std;


int numeroSophi(int);


int main(){
bool resolucion=false;
int num;

cout<<"Ingresar numero: ";
cin>>num;

resolucion=numeroSophi(num);

cout<<"\n\nes un numero de sofia: ";


if(resolucion==true){
    cout<<"SI";
}
else{
    cout<<"NO";
}



getch();
return 0;
}



int numeroSophi(int num){
    int cont=0,cont2=0,sophi;


    for(int i=1;i<=num;i++){
        if(num%i==0){
            cont++;
        }
    }

    if(cont==2){
        sophi=2*num+1;
        cout<<sophi;
        for(int i=1;i<=sophi;i++){

            if(sophi%i==0){
                cont2++;
            }
        }
    }

    if(cont2==2){
        return true;
    }
    else{
        return false;
    }


}
