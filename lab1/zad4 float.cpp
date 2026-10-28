#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a,b;
    cout<<"Wprowadz a i b"<<endl;
    cin>> a >> b;
    
    float c1 = a*b;
    float c2 = a+b;
    
    cout<<"wynik mnozenia z zmiennymi typu int to: "<< c1 << endl;
    
    cout<<"wynik dodwania z zmiennymi typu int to: "<< c2;
    
    return 0;
}