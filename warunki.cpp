#include <iostream>

using namespace std;

int x;
int main()

{

  cout<<"Podaj zawartość portfela: \n";
  cin>>x;

  if (x>1500) {
     cout<<"Możesz kupić rower :) \n"; }
  else {
     cout<<"Jesteś biedak spadaj :)) \n"; 
     }
  return 0;
}


