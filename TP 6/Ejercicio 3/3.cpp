#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int lis[15]={};
int minLis,contMinLis=0;

for(int i=0;i<15;i++){
    cout<<"INGRESE LOS NUMEROS: ";
    cin>>lis[i];
}



for(int i=0;i<15;i++){
    if(i==0){
        minLis=lis[0];
    }
    if(lis[i]<minLis){
        minLis=lis[i];
    }
}

for(int i=0;i<15;i++){
    if(minLis==lis[i]){
        contMinLis++;
    }
}

cout<<"\n\n--------------------------------------------------------------\n";
cout<<"-El menor numero de la lista: "<<minLis<<endl;
cout<<"-Se repite: "<<contMinLis<<" veces";
cout<<"\n--------------------------------------------------------------\n";



getch();
return 0;
}
