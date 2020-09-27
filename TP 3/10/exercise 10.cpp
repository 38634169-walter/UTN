#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num,b1=0,b2=0,imp1,imp2;



for(int x=0;x<7;x++){
    cout<<"\n\n-Ingresar numero: ";
    cin>>num;

    if(num%2!=0){
        if(!b1){
            imp1=num;
            b1=1;
        }
        else if(!b2){
            imp2=num;
            b2=1;
        }
    }
}

cout<<"\n\n------------------------------------------------------------------\n-Primer numero impar: "<<imp1<<"\n-Segundo numero impar: "<<imp2<<"\n------------------------------------------------------------------\n\n";



getch();
return 0;
}
