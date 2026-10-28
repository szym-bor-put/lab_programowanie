#include <iostream>
#include <cmath>

using namespace std;

int main() 

{   
   
   int m; 
   cout<<"Podaj liczbe minut: "<<endl;
   cin>>m;
   
   int g = m/60;
   int m2 = m%60;
   
   cout<<g<<" godz. "<<m2<<" min.";
   
}