#include<iostream>
#include<conio.h>
#include<locale.h>


using namespace std;

int main(){
setlocale(LC_CTYPE,"spanish");


int edad;
char color,sexo;


//A
int contMasVotadoF[4]={};
int maxVotadoF=0,masVotadoF;
string masVotado;

//B
int contDecada[10]={};



cout<<"-Edad: ";
cin>>edad;
while(edad<1||edad>99){
    cout<<"-Reingresar edad: ";
    cin>>edad;
}

while(edad!=0){

    cout<<"-Color elegido: ";
    cin>>color;
    while(color!='n'&&color!='a'&&color!='b'&&color!='o'){
        cout<<"-Reingresar color elegido: ";
        cin>>color;
    }
    cout<<"-Sexo: ";
    cin>>sexo;
    while(sexo!='m'&&sexo!='f'){
        cout<<"-Reingresar sexo: ";
        cin>>sexo;
    }


    //A
    if(sexo=='f'&&color=='n'){
        contMasVotadoF[0]++;
    }
    else{
        if(sexo=='f'&&color=='a'){
            contMasVotadoF[1]++;
        }
        else{
            if(sexo=='f'&&color=='b'){
                contMasVotadoF[2]++;
            }
            else{
                if(sexo=='f'&&color=='o'){
                    contMasVotadoF[3]++;
                }
            }
        }
    }

    //B
    if(edad>0&&edad<10){
        contDecada[0]+=1;
    }
    else{
        if(edad>9&&edad<20){
            contDecada[1]+=1;
        }
        else{
            if(edad>19&&edad<30){
                contDecada[2]+=1;
            }
            else{
                if(edad>29&&edad<40){
                    contDecada[3]+=1;
                }
                else{
                    if(edad>39&&edad<50){
                        contDecada[4]+=1;
                    }
                    else{
                        if(edad>49&&edad<60){
                            contDecada[5]+=1;
                        }
                        else{
                            if(edad>59&&edad<70){
                                contDecada[6]+=1;
                            }
                            else{
                                if(edad>69&&edad<80){
                                    contDecada[7]+=1;
                                }
                                else{
                                    if(edad>79&&edad<90){
                                        contDecada[8]+=1;
                                    }
                                    else{
                                        if(edad>89&&edad<100){
                                            contDecada[9]+=1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }




    cout<<"-Edad: ";
    cin>>edad;
    while(edad<0||edad>99){
        cout<<"-Reingresar edad: ";
        cin>>edad;
    }


}



//A
for(int i=0;i<4;i++){
    if(contMasVotadoF[i]>maxVotadoF){
        maxVotadoF=contMasVotadoF[i];
        masVotadoF=i;
    }
}
switch(masVotadoF){
case 0: masVotado="Negro";break;
case 1: masVotado="Azul";break;
case 2: masVotado="Blanco";break;
case 3: masVotado="Otros";break;
}



cout<<"\n\n--------------------------------------------------------------\n";
cout<<"-Color mas votado por las mujeres: "<<masVotado<<" con "<<maxVotadoF<<" votos"<<endl;
cout<<contMasVotadoF[1]<<endl<<contMasVotadoF[2]<<endl<<contMasVotadoF[3]<<endl;
for(int i=0;i<10;i++){
    cout<<"Decada "<<i<<": "<<contDecada[i]<<endl;
}
cout<<"--------------------------------------------------------------\n";



getch();
return 0;
}
