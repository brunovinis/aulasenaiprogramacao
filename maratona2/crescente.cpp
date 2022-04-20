#include <bits/stdc++.h>

using namespace std;

int main(){

   float X;
   float Y;

   cout<<"Digite um numeros:";
   cin>>X;
   cout<<"Digite outro numeros:";
   cin>>Y;

   while(X > Y || X < Y){
      if(X < Y ){
         cout<<"CRESCENTE!"<<endl;
      }else{
         cout<<"DECRESCENTE!"<<endl;
      }
      
      cout<<"Digite outro  numero:";
      cin>>X;
      cout<<"Digite outro  numero:";
      cin>>Y;
   }

}




    
    


