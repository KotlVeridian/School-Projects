#include <iostream>

using namespace std;

int main()
{
 int n;
 int cif;
 int sumcif;
 cin >> n;
 while (n>9) {
    sumcif=0;
    while (n!=0){
        cif=n%10;
    sumcif=sumcif+cif;
    n=n/10;
    } n=sumcif;
 }


    cout << n << endl;
    return 0;
}
