#include<iostream>
#include<conio.h>

using namespace std;

int main(){
int contCasos=0;


for(int i=1;i<=99999;i++){
    int v[5]={};
    int vAux[5]={};
    int x=0,cont=0;
    int num,cont4=0,cont3=0;


    num=i;

    while(num>0){
        v[x]=num%10;
        num=num/10;
        x++;
    }

    for(int j=4;j>=0;j--){
        vAux[cont]=v[j];
        cont++;
    }

    for(int j=0;j<5;j++){
        if(v[j]==4){
            cont4++;
        }
        if(v[j]==3){
            cont3++;
        }
    }

    if(cont4>=1&&cont3>cont4){

        for(int i=0;i<5;i++){
            cout<<vAux[i];
        }
        contCasos++;
        cout<<endl;
    }

}

cout<<"la cantidad de veces que se repite es: "<<contCasos;


getch();
return 0;
}

