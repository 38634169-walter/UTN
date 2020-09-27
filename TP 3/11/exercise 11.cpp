#include<iostream>
#include<conio.h>

using namespace std;

int main(){
int num, b=0, ant, s=0;

for(int x=0;x<8;x++){
    cout<<"\n\n-Ingresar un numero: ";
    cin>>num;

    if(!b){
        ant=num;
        b=1;
    }
    else if(num>ant){
        ant=num;
    }
        else {
            s=1;
        }
}

if(s==true){
    cout<<"\n\n-------------------------------------------\n-El conjunto esta desordenado\n-------------------------------------------\n";
}
else{
    cout<<"\n\n-------------------------------------------\n-El conjunto esta ordenado\n-------------------------------------------\n";
}

getch();
return 0;
}
