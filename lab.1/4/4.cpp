#include<iostream>
using namespace std;
int main()
{

    int i,factorial=1,n;

    cout<<"Enter the number :";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    cout<<"Factorial of the "<<n<< "= " <<factorial<<endl;
    return 0;
}
