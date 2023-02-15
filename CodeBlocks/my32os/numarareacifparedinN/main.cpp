#include <iostream>

using namespace std;

int main()
{
  int nrPare=0;
  int cif;
  int n;
  cin>> n;
  while (n!=0){
    cif=n%10;

        nrPare=nrPare+1;
      n=n/10;
  }




    cout << nrPare << endl;
    return 0;
}
