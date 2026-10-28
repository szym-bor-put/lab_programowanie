#include <iostream>

using namespace std;

int main() 

{   
    double pi = 3.1415926535;
    double r;
    
    cout<<"Podaj promien kola: "<<endl;
    cin>>r;
    
    double obwod = 2*pi*r;
    double pole = pi*r*r;
    
    cout<<"obwod kola to "<<obwod<<" a pole kola to "<<pole;

    
}