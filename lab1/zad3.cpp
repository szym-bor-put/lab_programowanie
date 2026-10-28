#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numer[3] = {1,2,3};
    string imiona[3] = {"Szymon", "Mikolaj", "Franek"};
    string nazwiska[3] = {"Borynski","Nowak","Duda"};
    
    cout<<"Lista obecnosci"<<endl;
    cout<<"nr     imie     naziwsko"<<endl;;
    for (int i = 0; i<3;i++){
        cout<< left << setw(7) <<numer[i];
        cout<< left << setw(9) <<imiona[i];
        cout<< nazwiska[i]<<endl;
    }

    return 0;
}