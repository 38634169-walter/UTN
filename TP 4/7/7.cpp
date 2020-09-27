#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num, imp_ant=0, imp_ult=0,b1=0;
bool stop=1;

while(stop==true){

    cout<<"\n\n\n INGRESE UN NUMERO: ";
    cin>>num;

    if(num%2!=0){
        if(!b1){
            imp_ult=num;
            b1=1;
        }
        else{
            imp_ant=imp_ult;
            imp_ult=num;
        }
    }

    if(num%7==0){
        stop=false;
    }


}
cout<<"\n\n---------------------------------------------------------------------------\n";
cout<<"-El anteultimo numero impar es: "<<imp_ant<<endl;
cout<<"-El ultimo numero impar es: "<<imp_ult<<endl;
cout<<"---------------------------------------------------------------------------\n\n";



getch();
return 0;}
