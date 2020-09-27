#include<iostream>
#include<conio.h>
#include<stdio.h>


using namespace std;

int main(){

int num1, num2,pass;
cout<<"Ingresa 1 numero: ";
cin>>num1;
cout<<"\n\n Ingresa otro numero: ";
cin>>num2;
cout<<endl<<endl;
if (num2<num1){

    pass=num2;
    num2=num1;
    num1=pass;
    }
for(num1++;num1<num2;num1++){

    cout<<num1<<endl;
}


getch();
return 0;
}
