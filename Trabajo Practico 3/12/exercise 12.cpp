#include<iostream>
#include<conio.h>

using namespace std;

int main (){

int num,b1=0,b2=0,max1,max2;

for(int x=0;x<5;x++){
    cout<<"\n\n-Introduci un numero ";
    cin>>num;

    if(!b1){
        max1=num;
        b1=1;
    }
    else if(!b2){
        if(num>max1){
            max2=max1;
            max1=num;
            b2=1;
        }
        else{
            max2=num;
        }
    }
    else if (num>max1){
        max2=max1;
        max1=num;
        }
    else if (num>max2){
            max2=num;
        }
}
cout<<"\n\n------------------------------------------------------\n-El numero mayor es: "<<max1<<"\n-El segundo mayor es: "<<max2<<"\n------------------------------------------------------\n\n";


getch();
return 0;
}
