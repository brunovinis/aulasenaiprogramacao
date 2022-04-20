#include <bits/stdc++.h>

using namespace std;

int main(){
    cout<<fixed<<setprecision(2);

    float N, i, qte, totalCobaias, totalSapos, totalCoelhos, totalRatos;
    float pratos, psapos, pcoelhos;
    char tipoCobaia;

    totalRatos = 0;
    totalCoelhos = 0;
    totalSapos = 0;

    cout<<"Quantos casos de teste serao digitados? ";
    cin>>N;

   

    for( i = 1; i <= N; i++){
   
        //cout<<"Quantidade de cobaias: ";
        //cin>>qte;
        cout<<"Tipo de cobaia: ";
        cin>>tipoCobaia;
        cout<<"Quantidade de cobaias: ";
        cin>>qte;

        if (tipoCobaia == 'R'){ 
            totalRatos = totalRatos + qte;
        }
        else if(tipoCobaia == 'S'){
            totalSapos = totalSapos + qte;
        }else{
            totalCoelhos = totalCoelhos + qte;
        
        }
   
    }
    totalCobaias = totalRatos + totalSapos + totalCoelhos;
   
    pcoelhos = totalCoelhos / totalCobaias * 100;
    pratos = totalRatos / totalCobaias * 100;
    psapos = totalSapos / totalCobaias * 100;
    
    
    cout<<"RELATORIO FINAL:"<<endl;
    cout<<"Total: "<< totalCobaias<< " cobaias"<<endl;
    cout<<"Total de coelhos: "<< totalCoelhos<<endl;
    cout<<"Total de ratos: "<< totalRatos<<endl;
    cout<<"Total de sapos: "<< totalSapos<<endl;
    cout<<"Percentual de coelhos: "<< pcoelhos<<endl;
    cout<<"Percentual de ratos: "<< pratos<<endl;
    cout<<"Percentual de sapos: "<< psapos<<endl;



}










