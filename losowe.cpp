#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

int liczba, strzal, ile_prob=0;


int main ()

{

  cout<<"Pomyślałem sobie liczbę z zakresu od 1 ... 100. \n";
  srand(time(NULL));
  liczba=rand()%100+1;

  //  cout<<liczba<<" \n";

  while(strzal!=liczba)
   {
     ile_prob++;
     cout<<"Zgadnij jaka: "<<ile_prob<<" próba: \n";
     cin>>strzal;
     if(strzal==liczba)
        cout<<"Udało się wygrywasz. "<<ile_prob<<" próbie \n";

     else if(strzal<liczba)
        cout<<"To za mało. \n";

     else if(strzal>liczba)
        cout<<"To za dużo. \n";

   }

 // system("pause");

  return 0;

}

 
