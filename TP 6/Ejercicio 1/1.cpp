#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");

int vec[10]={};

for(int i=0;i<10;i++){
    cout<<"Introducir numero: ";
    cin>>vec[i];
}

for(int i=0;i<10;i++){
    if(vec[i]>0){
        cout<<vec[i]<<endl;
    }
}






getch();
return 0;
}
