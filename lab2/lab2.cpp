#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	
	/* ZAD 7
	double a;
    int i=0;
    int j=0;
    
    double tab[10];
    
    while(i<10){
        
        cout<<"Wprowadz liczbe rzeczywista: "<<endl;
        cin>>a;
        
        if(a>0){
            tab[j]=a;
            j++;
        }
        
        i++;
    }
    
    cout<<endl<<endl;
    
    for(int i=0; i<j ;i++){
        cout<<tab[i]<<endl;
    }
	*/
	
	
	
	
	/* ZAD 8
	 int i=0;
    
    while(i<=100){
        
        if(i%2 == 0){
            cout<<i<<endl;
        }
        i++;
    }
	*/
	
	
	
	
	
	/* ZAD 9
	int a;
    
    cout<<"Wprowadz liczbe: "<<endl;
    cin>>a;
    
    if(a == 0){
        cout<<"nie mozna dzielic przez 0.";
    }
    
    cout<<endl<<endl;
    
    int i=0;
    
    while(i<=100){
        
        if(i%a == 0){
            cout<<i<<endl;
        }
        i++;
    }
	*/
	
	
	
	
	
	
	/* ZAD 10
	    int a;
    
    cout<<"Wprowadz liczbe: "<<endl;
    cin>>a;
    
    if(a == 0){
        cout<<"nie mozna dzielic przez 0.";
    }
    
    cout<<endl<<endl;
    
    int i=0;
    int j=0;
    
    while(i<=100){
        
        if(i%a == 0){
            j++;
        }
        i++;
    }
    
    cout<<"W przediale [0,100] liczb podzielnych przez "<<a<<" jest "<<j<<".";
	*/
	
	
	
	
	
	
	/* ZAD11
	
	    int a,b;
    
    cout<<"Wprowadz dwie liczby calkowite: "<<endl;
    cin>>a>>b;
    
    cout<<endl<<endl;
    
    int i=a; int j=b;
    if(a<b){
        
        while(i<=b){
            
            if(i%3 == 0){
                cout<<i<<endl;
            }
            i++;
        }    
    }
    else{
        
        while(j<=a){
            
            if(j%3 == 0){
                cout<<j<<endl;
            }
            j++;
        }
    }
	
	*/
	
	
	
	
	
	
	/* ZAD 12
	int a;
    
    double p;
    
    double tab[a];
    
    cout<<"Wprowadz ilosc liczb do wczytania: "<<endl;
    cin>>a;
    
    cout<<"Wprowadz "<<a<<" liczb(y) rzeczywistych"<<endl;
    
    for(int i=0; i<a; i++){
        
        cin>>tab[i];
        
        p = p + tab[i];
        
    }
    
    double w = p/a;
    
    cout<<endl<<"srednia arytmetyczna "<<a<<" liczb(y) to: "<<w;
	*/
	
	
	
	
	
	
	/* ZAD 13
	    int i=100;
    
    while(i>=0){
        
        cout<<i<<endl;
        
        i--;
        
    }
	*/
	
    
	
	
	
	
    /* ZAD 14
	    int a,b,c;
    
    cout<<"Wprowadz 3 liczby: "<<endl;
    
    cin>>a>>b>>c;
    
        if(a==b && b==c){
            
            cout<<endl<<"wszystkie liczby sa rowne.";
        }
        else if(a<=b && a<c){
            
            cout<<endl<<a<<" jest najmniejsze.";
        }
        else if(b<a && b<=c){
            
            cout<<endl<<b<<" jest najmniejsze.";
        }
        else if(c<=a && c<b){
            cout<<endl<<c<<" jest najmniejsze.";
        }
	*/
    
    
	
	
	
	
    
    /* ZAD 15
    int i = 0;
    
    int n,m;
    
    cout<<"Podaj ilosc liczb do wyslosowania: "<<endl;
    cin>>n;
    cout<<"Podaj zakres liczb od 0 do m: "<<endl;
    cin>>m;
    cout<<endl;
    
     while(i <= n){
         
         int random = rand() % m;
         
         cout<<random<<endl;
         
         i++;
     }
     */
    
	
	
	
	
    
    /* ZAD 16
    int i = 0; 
    int p = 0;
    int lucky;

    cout <<"Podaj szczeswliwy numerek od 1 do 10: ";
    cin >> lucky;

    if (lucky <= 10 && lucky >= 0) {

        while (i <= 10) {

            int random = rand() % 10 + 1;
            
            cout<<random<<endl;

            if(random == lucky){
                p++;
            }
            
            i++;
        }

    }
    else {
        cout<<"Podaj numer z przedzialu liczbowego.";
    };

    cout<<"Wylosowano szczesliwa liczbe "<<p<<" razy";
    */
    
}
