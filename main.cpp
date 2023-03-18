#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n, secret, contor;
  srand (time(0));
  secret = rand() % 50 + 1;
   contor=0;
  
    
  do
  {
    contor++;
    cout << "n = "; cin >> n;
    if(n < secret)
      cout << "Prea mic!" << endl;
    else 
      if (n > secret)
        cout << "Prea mare!" << endl;
  }
  while (n != secret);
   cout << "Ați ghicit din " << contor << " încercări." << endl;
}