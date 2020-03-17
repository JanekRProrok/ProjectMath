#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
    float A;
    float a, b;
    float srodek;
    float eps = 0.1;
    
    cout<<"Podaj liczbe, z ktorej chcesz wyznaczyc pierwiastek: ";
    cin >> A;
    
    if (A<0){
    	cout<<"W zbiorze liczb rzeczywistych nie istnieje pierwiastek kwadratowy z liczby ujemnej.";}
	 else {
	    
    a = 0;
    b = A;
    
    while(fabs(a-b)>eps)
    {
        srodek = (a + b) / 2;
        if(srodek * srodek > A)
            b = srodek;
        else
            a = srodek;   
        cout <<"[" << a<< ", " << b <<")"<< endl;
    }
    cout << a;
}
    return 0;
}
