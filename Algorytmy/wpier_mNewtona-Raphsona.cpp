#include<iostream>
#include<cmath>
using namespace std;

//ustawienie precyzji pierwiastka
const double eps = 0.000001;

double pierwiastek(double P, double eps)
{
	   double a = 1., b = P;
       
       //dopoki nie otrzymamy zadanej precyzji
       while(fabs(a-b)>=eps) 
       {
           a = (a+b)/2.;   
           b = P/a;
       }
 
       return a; 
}
 
int main()
{
    double x;
    cout<<"Podaj liczbe, z ktorej chcesz wyznaczyc pierwiastek: ";
    cin>>x;
    
    if (x<0){
    	cout<<"W zbiorze liczb rzeczywistych nie istnieje pierwiastek kwadratowy z liczby ujemnej.";}
	 else {
		cout<<fixed<<pierwiastek(x, eps); 
	} 
	
    cin.ignore();
    cin.get();
    return 0;
}
