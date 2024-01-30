#include<iostream>
using namespace std;

int main()
{

    int n,i;
    float number[10],total,avg;
    cout<<"Enter the numbers of data: ";
    cin>> n;

    while (n>100 || n<= 0)
    {
        cout<<"Enter the number between 1 to 100)"<<endl;
        cin>> n;
    }

    for (i=0;i<n;++i)
    {
        cout<<" Enter the number "<<i+1<<": ";
        cin>> number[i];
        total +=number[i];
    }
    avg = total/n;
    cout<< "Average = " << avg;

    return 0;
}
