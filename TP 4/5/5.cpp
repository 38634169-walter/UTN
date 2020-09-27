#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num,b1=0,b2=0,n_max,n_min, con=0;

while(n_max-10<n_min){
    cout<<"INGRESE UN NUMERO: ";
    cin>>num;
    con+=1;

    if(!b1){
        n_max=num;
        b1=1;
    }
    else{
        if(!b2){
            if(num>n_max){
                n_min=n_max;
                n_max=num;
                b2=true;
            }
            else{
                n_min=num;
                b2=1;
            }
        }
        else{
            if(num>n_max){
                n_max=num;
            }
            else{
                if(num<n_min){
                    n_min=num;
                }
            }
        }
    }
}
cout<<"\n-----------------------------------------------------------------------\n";
cout<<"LA CANTIDAD DE NUMEROS QUE COMPONEN LA LISTA ES: "<<con;
cout<<"\n-----------------------------------------------------------------------\n";

getch();
return 0;
}
