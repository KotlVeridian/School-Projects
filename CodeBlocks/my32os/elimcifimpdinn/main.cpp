#include <iostream>

using namespace std;

int main()
{
    int nrNou=0;
    int p=1;
    int cif;
    int n;
    cin>>n;
    while(n!=0) {
        cif=n%10;
        if (cif%2==1){
            nrNou=nrNou+cif*p;
        p=p*10;}
        n=n/10;
    }

    cout << nrNou << endl;
    return 0;
}
