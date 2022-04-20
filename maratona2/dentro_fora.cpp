#include <bits/stdc++.h>

using namespace std;

int main(){
   int N, X, i, dentro, fora;

    dentro = 0;
    fora = 0;
    cout<<"Quantos numeros voce vai digitar? ";
    cin>>N;
   
    for( int i = 1; i <= N; i++){
        cout<<"Digite um numero: ";
         cin>>X;
      
        if (X >= 10 && X <= 20){
            dentro = dentro + 1;
        }else{
            fora = fora + 1;
        }
    }
   
    cout<<dentro<< " DENTRO "<<endl;
    cout<<fora<< " FORA "<<endl;
}
