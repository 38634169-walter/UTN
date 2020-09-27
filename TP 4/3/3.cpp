#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num=1, b1=0, n_max, pos=0, pos_max;

while(num!=0){
    cout<<"INGRESE UN NUMERO: ";
    cin>>num;

    pos+=1;
    if(!b1){
        n_max=num;
        pos_max=pos;
        b1=1;
    }
    else{
        if(num>n_max){
            n_max=num;
            pos_max=pos;
        }
    }
}

cout<<"\n------------------------------------------------------------\n";
cout<<"EL NUMERO MAXIMO ES: "<<n_max<<endl<<"SU POSICIONE ES: "<<pos_max;
cout<<"\n------------------------------------------------------------\n";


getch();
return 0;
}
