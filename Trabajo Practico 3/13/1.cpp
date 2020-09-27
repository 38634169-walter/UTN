#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num=1, con_p=0,con_neg=0;


while(num!=0){
    cout<<"INGRESA UN NUMERO: ";
    cin>>num;

    if(num>0){
        con_p++;
    }
    else{
        if(num<0){
            con_neg++;
        }
    }
}

cout<<"\n----------------------------------------------------------\n";
cout<<"Cantidad de numeros positivos: "<<con_p<<endl;
cout<<"Cantidad de numeros negativos: "<<con_neg<<endl;
cout<<"\n----------------------------------------------------------\n";





getch();
return 0;
}
