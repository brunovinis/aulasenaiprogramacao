#include <bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){

double a;
double b;
double c;
double x1;
double x2;
double delta;


   cout<<"Coeficiente a: ";
   cin>>a;
   cout<<"Coeficiente b: ";
   cin>> b;
   cout<<"Coeficiente c: ";
   cin>>c;

   delta = (b * b) - (4 * a * c);

   if (a == 0 || delta < 0){
       cout<<"Esta equacao nao possui raizes reais";
   }
   else{
       x1 = (-b + sqrt(delta)) / (2 * a);
       x2 = (-b - sqrt(delta)) / (2 * a);
       cout<<"X1 = "<< x1<<endl;
       cout<<"X2 = "<< x2<<endl;

   }


}







