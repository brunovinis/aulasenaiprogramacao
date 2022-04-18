#include <bits/stdc++.h>

using namespace std;

int main(){

    cout<<fixed<<setprecision(2);

    int bandeira;
    float bandeiraKm1 = 1.80;
    float bandeiraKm2 = 2.30;
    int kmRodada;

    cout<< "Digite o numero da bandeira <1 ou 2>: ";
    cin>> bandeira;

    cout<< "Digite a kilometragem rodada: ";
    cin>> kmRodada;

    if(bandeira == 1){
        cout<<"Valor da corrida é R$ "<< bandeiraKm1 * kmRodada;

    }
    if(bandeira == 2){
        cout<<"Valor da corrida é R$ "<< bandeiraKm2 * kmRodada; 
    }

}