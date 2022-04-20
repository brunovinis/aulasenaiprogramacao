#include <bits/stdc++.h>

using namespace std;

int main(){

    float d1, d2, d3, maior;

    cout<<"Digite uma distancia:";
    cin>>d1;
    cout<<"Digite uma segunda distancia:";
    cin>>d2;
    cout<<"Digite uma terceira distancia:";
    cin>>d3;
    
    if (d1 > d2 && d1 > d3){
        maior = d1;
    }
    if (d2 > d3 && d2 > d1){
        maior = d2;
    }
    if(d3 > d1 && d3 > d2){
        maior = d3;
    }     
       
    cout<<"MAIOR DISTANCIA = "<< maior;

}

