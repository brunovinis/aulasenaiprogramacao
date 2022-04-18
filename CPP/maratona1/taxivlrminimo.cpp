#include <bits/stdc++.h>

using namespace std;

int main(){

    cout<<fixed<<setprecision(2);

    int bandeira;
    float bandeiraKm1 = 1.80;
    float bandeiraKm2 = 2.30;
    float kmRodada;
    float taxaminima = 3.50;
    cout<< "Digite o numero da bandeira <1 ou 2>: ";
    cin>> bandeira;

    cout<< "Digite a kilometragem rodada: ";
    cin>> kmRodada;

    if(bandeira == 1 && kmRodada > 1){
        cout<<"Valor da corrida é R$ "<< bandeiraKm1 * kmRodada;

    }
    else if(bandeira == 1 && kmRodada < 1){
        cout<<"Valor da corrida é R$ "<< taxaminima; 

    }
    else if(bandeira == 2 && kmRodada > 1 ){
        cout<<"Valor da corrida é R$ "<< bandeiraKm2 * kmRodada; 
    } 
    else{
        cout<<"Valor da corrida é R$ "<< taxaminima;
    }
}