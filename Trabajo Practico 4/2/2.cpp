#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int b1=0,n_max,num=1;

while(num!=0){
    cout<<"INGRESE UN NUMERO: ";
    cin>>num;

    if(!b1){
        n_max=num;
        b1=true;
    }
    else {
        if(num>n_max){
            n_max=num;
        }
    }
}

cout<<"\n-------------------------------------------------\n";
cout<<"EL NUMERO MAXIMO ES: "<<n_max;
cout<<"\n-------------------------------------------------\n";

getch();
return 0;
}
