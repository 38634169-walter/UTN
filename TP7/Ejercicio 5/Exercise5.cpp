#include<iostream>
#include<conio.h>

using namespace std;


void listar(int[],int);

int main(){

int tam=10;
int vec[10]={1,2,4,8,3,6,1,1,9,3};

listar(vec,tam);



getch();
return 0;
}



void listar(int v[],int t){

    for(int i=0;i<t;i++){
        cout<<v[i]<<" , ";
    }


}
