#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num=1, ant=0, b1=0;
bool creciente=true;

while(num!=0){

    if(num<ant){
        creciente=false;
    }
    ant=num;

    cout<<"Ingreasa un numero: ";
    cin>>num;

}
cout<<"\n\n---------------------------------------------------------------\n";
if(creciente==true){
    cout<<"CONJUNTO ORDENADO";
}
else{
    cout<<"CONJUNTO DESORDENADO";
}
cout<<"\n---------------------------------------------------------------\n\N";




getch();
return 0;}
