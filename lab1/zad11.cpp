#include <iostream>
#include <cmath>

using namespace std;

int main() 

{   
   
   double c;
   cout<<"Podaj temperatre w stopniach Celsjusza: "<<endl;
   cin>>c;
   
   double h = 9*c;
   double f = h/5 + 32;
   double z = ceil(f * 100.0) / 100.0;
   
   cout<<"Ta sama temperatura w stopniach Fahrenheita wynosi: "<< z;
   
}