#include <iostream>
using namespace std;

int main() //kod 01_14 - kod do zadania 5

{   
    double f;
    double c;
    cout<<"Wprowadz temperature w stopniach Fahrenheita: "<<endl;
    cin>>f;
    c = 5.0 * (f - 32.0) / 9.0;
    cout << f << " stopni Fahrenheita to " << c << " stopni Celsjusza";
    //spodziewany wynik dla f = 20 to c okolo -6.66667
    return 0;
}