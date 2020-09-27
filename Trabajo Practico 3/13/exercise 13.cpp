#include<iostream>
#include<conio.h>

using namespace std;

int main (){

int num;
cout<<"\n\n-Introduci un numero: ";
cin>>num;

cout<<"\n\n-----------------------------------------------\n-Los numeros divisibles de "<<num<<" son: ";

for(int x=1;x<=num;x++){

    if(num%x==0){
        cout<<x<<" ";
    }
}
cout<<"\n-----------------------------------------------\n\n";




getch();
return 0;
}
