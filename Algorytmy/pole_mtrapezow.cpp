#include<iostream>
#include<iomanip>
using namespace std;

double f(double x)
{
	//funkcja zawsze przyjmuje wartosci dodatnie
	//wiec mozna pominac wartosc bezwzgledna
	return x*x+x+2;
}

double Pole(int a, int b, int n)
{
	double h = (b-a)/(double)n; //wysokosc trapezow
	double S = 0.0; //zmienna bedzie przechowywac sume pol trapezow
	double podstawa_a = f(a), podstawa_b;
		
	for(int i=1;i<=n;i++)
	{
		podstawa_b = f(a+h*i);
		S += (podstawa_a+podstawa_b);
		podstawa_a = podstawa_b;
	}
	return S*0.5*h;
}

int main()
{
	int a, b, n;
	cout<<"Podaj przedzial <a , b>\na = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"Podaj liczbe trapezow: ";
	cin>>n;
	
	if(!(a<b))
		cout<<"To nie jest przedzial!";
	else
		cout<<"Pole figury wynosi: "<<fixed<<setprecision(2)<<Pole(a, b, n);	

	
	cin.ignore();
	cin.get();
	return 0;
}
