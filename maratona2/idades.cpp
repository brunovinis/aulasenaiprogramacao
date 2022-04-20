#include <bits/stdc++.h>

using namespace std;

int main(){
    string nome1, nome2; 
    int idade1, idade2; 
    float media;

    cout<<"Dados da primeira pessoa:"<<endl;
    cout<<"Nome: ";
    cin>>nome1;
    cout<<"Idade: ";
    cin>>idade1;

    cout<<"Dados da segunda pessoa:"<<endl;
    cout<<"Nome: ";
    cin>>nome2;
    cout<<"Idade: ";
    cin>>idade2;

    media = (idade1 + idade2) / 2;

    cout<<"A idade mehdia de "<< nome1<< " e "<< nome2<< " eh de "<< media<< " anos";


}






