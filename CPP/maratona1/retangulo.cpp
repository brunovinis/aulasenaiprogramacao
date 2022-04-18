#include <bits/stdc++.h>

using namespace std;

int main(){

cout<<fixed<<setprecision(2);

    int base1;
    int altura1;
    int base2;
    int altura2;

    cout<< "Digite a base do primeiro retangulo em cm: ";
    cin>> base1;
    cout<< "Digite a altura do primeiro retangulo em cm: ";
    cin>> altura1;
    float area1 = base1 * altura1;

    cout<< "Digite a base do segundo retangulo em cm: ";
    cin>> base2;
    cout<< "Digite a altura do segundo retangulo em cm: ";
    cin>> altura2;
    float area2 = base2 * altura2;

    cout<< "A area do primeiro retangulo e: "<< area1 <<"cm"<< endl;
    cout<< "A area do segundo retangulo e: "<< area2 <<"cm"<< endl;

    if(area1 > area2){
        cout<<"A area do primeiro retangulo e maior";
    }else{

        cout<<"A area do segundo retangulo e maior";
    }
}