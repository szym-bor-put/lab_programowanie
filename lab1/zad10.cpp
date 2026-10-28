#include <iostream>

using namespace std;

int main() 

{   
   
   double a,b;
   
   cout<<"Podaj boki prostokata: "<<endl;
   cin>>a>>b;
   
   double pole = a*b;
   double obwod = 2*a + 2*b;
   
   cout<<"Pole wynosi "<<pole<<" a obwod "<<obwod;
   
}