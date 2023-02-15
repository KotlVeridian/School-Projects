#include <iostream>

using namespace std;

int main()
{
    int nrNou=0;
    int cif;
    int n;
    int p=1;
    cin >> n;
    while (n!=0){
        cif=n%10;
        if (cif%2==0){
            nrNou= nrNou=cif*p;
            p=p*10;}

        nrNou=nrNou+cif*p;
        p=p*10;
        n=n/10;
    }
    cout <<  nrNou << endl;
    return 0;
}
