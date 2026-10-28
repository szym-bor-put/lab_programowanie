#include <iostream>
#include <cmath>

using namespace std;

int main() 

{   
   
   int s; 
   cout<<"Podaj liczbe sekund: "<<endl;
   cin>>s;
   
   int m = s/60;
   int s2 = s%60;
   
   cout<<m<<" min "<<s2<<" s";
   
}