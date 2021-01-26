#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int vec[15]={};
int num;
bool v=false;

for(int i=0;i<15;i++){
    cout<<"INTRODUCIR EL NUMERO: ";
    cin>>vec[i];
}
cout<<"\n\n-------------------------------------------------------\n";
cout<<"INTRODUCI UN NUEMRO TE INFORMAREMOS SI ESTA EN LA LISTA: ";
cin>>num;
cout<<"\n-------------------------------------------------------\n";

for(int i=0;i<15;i++){
    if(num==vec[i]){
        cout<<"Si pertenece a la lista \n\n";
        v=true;
    }
}

if(v==false){
    cout<<"No pertenece a la lista \n\n";
}

getch();
return 0;
}
