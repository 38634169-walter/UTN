#include<iostream>
#include<conio.h>

using namespace std;


int primo(int);


int main(){

bool es=false;
int num;

cout<<"INTRODUCI NUMERO: ";
cin>>num;

es=primo(num);


if(es==true){
    cout<<"\n\n es primo";
}
else{
    cout<<"\n\n no es primo";
}

getch();
return 0;
}


int primo(int n){
bool v=false;
int cont=0;


for(int i=1;i<=n;i++){

    if( n%i == 0 ){
        cont+=1;
    }

}


if (cont<=2){
    v=true;
}

return v;
}
