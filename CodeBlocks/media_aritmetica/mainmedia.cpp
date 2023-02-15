#include <iostream>

using namespace std;
int sum;

int main()
{ int sum=0;
int nrcif=0;
int n;
cout<<"Nr n: ";
cin>>n;
int cif;
 while (n!=0)
 {


    cif=n%10;
 if (cif>0)
    sum=sum+cif;
    nrcif=nrcif+1;



n=n/10;

 }
    cout << nrcif <<endl;
    return 0;}
