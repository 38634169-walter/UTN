#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");
//A
int num, numAnt1=0,numAnt2=0,numAnt3=0, b1=0, b2=0;
bool falla=1;

cout<<"\n\n-Ingresar numero: ";
cin>>num;


//B
int contNum=0,contNumAnt1=0,contNumAnt2=0,contNumAnt3=0;


while(num!=0){


    //A
    if(num>0&&numAnt1>0&&numAnt2>0){
        if((num+numAnt1+numAnt2)/3<8){
            cout<<"***************************************************\n";
            cout<<"*******  Fallas en el suministro eléctrico  *******\n";
            cout<<"*******      PRESIONE '0' PARA SALIR        *******\n";
            cout<<"***************************************************\n\n";
            falla=false;
        }
    }


    //B
    if(contNum==2&&contNumAnt1==2&&contNumAnt2==2&&contNumAnt3==2){
        cout<<"***************************************************\n";
        cout<<"*******          Reponer insumos            *******\n";
        cout<<"*******      PRESIONE '0' PARA SALIR        *******\n";
        cout<<"***************************************************\n\n";
        falla=false;
    }


    if(!b1){
        numAnt1=num;
        b1=1;
    }
    else{
        if(!b2){
            numAnt2=numAnt1;
            numAnt1=num;
            b2=1;
        }
        else{
            numAnt3=numAnt2;
            contNumAnt3=0;
            for(int i=1;i<=numAnt3;i++){if(numAnt3%i==0&&numAnt3>0){contNumAnt3++;}}
            numAnt2=numAnt1;
            contNumAnt2=0;
            for(int i=1;i<=numAnt2;i++){if(numAnt2%i==0&&numAnt2>0){contNumAnt2++;}}
            numAnt1=num;
            contNumAnt1=0;
            for(int i=1;i<=numAnt1;i++){if(numAnt1%i==0&&numAnt1>0){contNumAnt1++;}}
        }
    }





    cout<<"\n\n-Ingresar numero: ";
    cin>>num;
    while(falla==false&&num!=0){
        cout<<"\n\n-Ingresar numero: ";
        cin>>num;
    }
    contNum=0;
    for(int i=1;i<=num;i++){if(num%i==0&&num>0){contNum++;}}


}


return 0;
}
