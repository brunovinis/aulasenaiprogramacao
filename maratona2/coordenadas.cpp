#include <bits/stdc++.h>

using namespace std;

int main(){

    cout<<fixed<<setprecision(2);
    float X;
    float Y;

    cout<<"Valor de X: ";
    cin>>X;
    cout<<"Valor de Y: ";
    cin>>Y;

    if (X > 0 && Y > 0) {
        cout<<"Q1"<<endl;
    }
    else if (X < 0 && Y > 0){
        cout<<"Q2"<<endl;
    }    
    else if (X < 0 && Y < 0) {
        cout<<"Q3"<<endl;
    } 
    else if(X > 0 && Y < 0) {
       cout<<"Q4"<<endl;
    }
    else if (X == 0 && Y == 0){
        cout<<"Origem"<<endl;
    }
    else if(X == 0) {
        cout<<"Eixo Y"<<endl;

    }else{
        cout<<"Eixo X"<<endl;
    }
                       
    
}
            





