#include<iostream>
#define SIZE 100
using namespace std;

int main()
{
    int array[SIZE];
    int i,max,min,size;

    cout <<"Enter the size of the array :";
    cin>> size;



    cout<<"Enter "<<size<< "elements in the array:";
    for(i = 0;i<size;i++)

        cin>>array[i];

        max =array[0];
        min =array[0];
        for(i = 1;i<size;i++)
        {
            if(array[i] > max)
            max = array[i];

            if (array[i] < min)
            min = array[i];
        }



    cout<< "Maximum Number is= "<<max<<endl;
    cout<<"Minimum Number is= "<<min;

    return 0;
}
