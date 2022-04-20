#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<<fixed<<setprecision(2);

   float salario;
   float porcentagem;
   float aumento;
   float novoSalario;
   float teste;

    cout<<"Digite o salario da pessoa: ";
    cin>>salario;

    if (salario <= 1000.0){
        porcentagem = 20;

    }
    else if (salario <= 3000.0){
        porcentagem = 15;
    }
    else if(salario <= 8000.0){
        porcentagem = 10;
    } else{
        porcentagem = 5;
    }
      /*porcentagem <- 20
   senao
      se salario <= 3000.0 entao
         porcentagem <- 15
      senao
         se salario <= 8000.0 entao
            porcentagem <- 10
         senao
            porcentagem <- 5
         fimse
      fimse
   fimse*/
   
    aumento = (salario * porcentagem) / 100;
    novoSalario = salario + aumento;
   
   cout<<"Novo salario = R$ "<< novoSalario<<endl;
   cout<<"Aumento = R$ "<< aumento<<endl;
   cout<<"Porcentagem = "<< porcentagem<< " %";

}
