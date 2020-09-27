#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num=0, cont_simoniricos=0;


cout<<"\n\n-------------------------------------------------------\n";
cout<<"Los siguientes numeros son simoniricos: \n\n";

while(cont_simoniricos<=520){
    num++;
    if(num%15==0 && num%3==0 && num%6!=0){
        cout<<num<<endl;
        cont_simoniricos++;
    }
}
cout<<"-------------------------------------------------------\n\n";

getch();
return 0;

}
