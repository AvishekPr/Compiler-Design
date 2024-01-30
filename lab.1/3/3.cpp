#include<iostream>
#include<string.h>
using namespace std;

int main()
{


     char str1[50],str2[50];
     cout<<"Enter First Name: ";
     cin>>str1;
     cout<<"Enter Last Name: ";
     cin>>str2;
      size_t sizeofconcate= strlen(str1)+1+strlen(str2);
      char* result=new char[sizeofconcate];
      strcpy(result, str1);
      strcat(result, " ");
      strcat(result, str2);

     cout<<"Your Full Name is: "<<result;


}
