#include<iostream>
#include<conio.h>


using namespace std;

void asignar(int,int[],int[]);


int main(){

int num;
int v[5]={};
int v2[5]={};

cout<<"Ingresar un numero de hasta 5 cifras: ";
cin>>num;

asignar(num,v,v2);

getch();
return 0;
}



void asignar(int num, int v[], int v2[]){
    int i=0;
    int aux;
    int cont=0;

    while(num>0){
        v[i]=num%10;
        num=num/10;
        i++;
    }


    for(int j=4;j>=0;j--){
        v2[cont]=v[j];
        cont++;
    }


    for(int i=0;i<5;i++){
        cout<<v[i]<<" , ";
    }

    cout<<endl<<endl;
    for(int i=0;i<5;i++){
        cout<<v2[i]<<" , ";
    }
}
