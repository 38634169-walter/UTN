#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int lis[10]={};
int numMax,b1=0,pos;
for(int i=0; i<10;i++){
    cout<<"INTRODUCIR UN NUMERO: ";
    cin>>lis[i];
}

cout<<"\n\nMI LISTA ACTUAL: ";

for(int i=0;i<10;i++){
    cout<<lis[i]<<", ";
}


for(int i=0;i<10;i++){
    if(!b1){
        numMax=lis[i];
        pos=i;
        b1=1;
    }
    else{
        if (lis[i]>numMax){
        numMax=lis[i];
        pos=i;
        }
    }
}


for(int i=0;i<10;i++){
    if(pos==i){
        while(i!=9){
            lis[i]=lis[i+1];
            i++;
        }
    }
}

cout<<"\n\nMI LISTA MODIFICADA: ";

for(int i=0;i<9;i++){
    cout<<lis[i]<<", ";
}


getch();
return 0;
}
