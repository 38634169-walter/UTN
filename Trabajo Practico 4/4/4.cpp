#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num=1, b1=0, n_max;

while(num!=0){

    cout<<"INGRESA UN NUMERO: ";
    cin>>num;

    if(num%2==0){
        if(!b1){
            n_max=num;
            b1=23;
        }
        else{
            if(num>n_max){
                n_max=num;
            }
        }
    }

}
cout<<"\n-------------------------------------------------------------------------\n";
cout<<"EL NUMERO PAR MAXIMO ES: "<<n_max;
cout<<"\n-------------------------------------------------------------------------\n";



getch();
return 0;
}
