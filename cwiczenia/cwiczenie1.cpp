// utwórz i uruchom program do obliczania długości przekątnej kwadratu dla danej długości boku a , p=a*sqrt(2)

#include <iostream>
#include <cmath>

double p;
int a;

int main()

{
   
   std:: cout<<"Podaj długość boku a: ";
   std::cin>>a;
  
   p=a*sqrt(2);
   std::cout<<"Długość przekątnej kwadratu o boku a wynosi: "<<p<<" \n";

}


