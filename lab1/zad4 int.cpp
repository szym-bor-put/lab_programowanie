#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b;
    cout<<"Wprowadz a i b"<<endl;
    cin>> a >> b;
    
    int c1 = a*b;
    int c2 = a+b;
    
    cout<<"wynik mnozenia z zmiennymi typu int to: "<< c1 << endl;
    
    cout<<"wynik dodwania z zmiennymi typu int to: "<< c2;
    
    return 0;
}