#include <iostream>

using namespace std;

int main()
{
    int n, n1, ogl;

cin>>n;
cout<<"n= "<<n<<endl;
n1=n;
while(n!=0)
    {
    ogl=ogl*10+n%10;
    n=n/10;
    }
   if(n1==ogl)
    cout<<"n este palindrom"<<endl;
    else
        cout<<"oglinditul este "<<ogl<<", deci nu este palindrom"<<endl;

    return 0;
}
