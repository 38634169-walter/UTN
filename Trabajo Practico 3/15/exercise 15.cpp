#include<iostream>
#include<conio.h>

using namespace std;

int main (){
int num,cont=0;

cout<<"\n\n-Ingresar un numero: ";
cin>>num;

for(int x=1;x<=num;x++){

    if(num%x==0){
        cont++;
    }
}

if(cont==2){
    cout<<"\n\n--------------------------------------------------------------\n-El numero es primo\n--------------------------------------------------------------\n\n";
}
else{
    cout<<"\n\n--------------------------------------------------------------\n-El numero no es primo\n--------------------------------------------------------------\n\n";
}



getch();
return 0;
}
