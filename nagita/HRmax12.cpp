#include <iostream>
#include <cmath>




int wiek;
int waga;

float hrmax;

float hrmax_mezczyzna(float m)

{

  return 210-(0.5*wiek)-(0.022*waga+4);

}

float hrmax_kobieta(float k)

{

  return 210 - (0.5*wiek) - (0.022*waga);

}


int main ()

{


   std::cout << "Podaj wage: ";
   std::cin >> waga;
   std::cout << "Podaj wiek: ";
   std::cin >> wiek;

   std::cout<<"HRmax dla mężczyzny: "<<hrmax_mezczyzna(hrmax)<<" \n"; 
   std::cout<<"HRmax dla kobiety: "<<hrmax_kobieta(hrmax)<<" \n";
   return 0;
} 





