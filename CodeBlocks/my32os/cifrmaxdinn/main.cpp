#include <iostream>

using namespace std;

int main()
{
   int cifmax=0;
   int cif;
   int n;
   cin >>n;
   while (n!=0) {
    cif=n%10;
    if (cif>cifmax)
      cifmax=cif;
      n=n/10;
   }


    cout << cifmax << endl;
    return 0;
}
