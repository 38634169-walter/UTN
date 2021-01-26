#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int lis[10]={};
int num,ant;

for(int i=0;i<10;i++){
    cout<<"INGRESAR NUMERO: ";
    cin>>lis[i];
}

cout<<"\n\n MI LISTA ACTUAL: ";
for(int i =0;i<10;i++){
    cout<<lis[i]<<", ";
}

for(int j=0;j<10;j++){
    for(int i=0;i<10;i++){

        if (lis[i]>lis[i+1]){
            ant=lis[i+1];
            lis[i+1]=lis[i];
            lis[i]=ant;
        }

    }
}


cout<<"\n \n MI LISTA ORDENADA: ";
for(int i =0;i<10;i++){
    cout<<lis[i]<<", ";
}


getch();
return 0;
}
