#include<iostream>
#include<conio.h>

using namespace std;


void esMultiplo(int,int,bool&);


int main (){

    int num1,num2;
    bool es=false;


    cout<<"\nINTRODUCI PRIMER NUMERO: ";
    cin>>num1;
    cout<<"\nINTRODUCI SEGUNDO NUMERO: ";
    cin>>num2;


    esMultiplo(num1,num2,es);

    cout<<"\nES multiplo? ";

    if(es==true){
        cout<<"SI";
    }
    else{
        cout<<"no";
    }


getch();
return 0;
}

void esMultiplo(int num1,int num2,bool& es){

    if(num1%num2==0){
        es=true;
    }

}
