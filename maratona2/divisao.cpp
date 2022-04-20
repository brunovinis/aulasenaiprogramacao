#include <bits/stdc++.h>

using namespace std;

int main(){

    cout<<fixed<<setprecision(2);

    int N;
    int i;

    float x;
    float y;
    float divisao;

    cout<<"Quantos casos voce vai digitar? ";
    cin>>N;
   
   for(i = 1; i <= N; i++){
        cout<<"Entre com o numerador: ";
        cin>>x;
        cout<<"Entre com o denominador: ";
        cin>>y;

        if(y == 0){
            cout<<"DIVISAO IMPOSSIVEL";
        }else{
            divisao = x / y;
            cout<<"DIVISAO = "<< divisao<<endl;
        }
    }

}











