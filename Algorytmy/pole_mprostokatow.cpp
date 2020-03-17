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
  double x = (b-a)/(double)n; //pierwszy bok - kazdy prostokat ma taki sam
  double S = 0.0; //zmienna bedzie przechowywaæ sume pol trapezow
  double srodek = a+(b-a)/(2.0*n); //srodek pierwszego boku
 
  for(int i=0;i<n;i++)
  {
      S+=f(srodek); //obliczenie wysokosci prostokata
      srodek+=x; //przejscie do nastepnego srodka    
  }
  return S*x;
}
 
int main()
{
  int a, b, n;
  cout<<"Podaj przedzial [a, b]\na = ";
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
