#include<stdio.h>
using namespace std;
int main
{
int i,x;
char str[100];
cout<<"Enter the string";
cin>>str;

cout<<"Choose the following option";
cout<<"1= Encrypt the string.\n";
cout<<"2=Decrypt the string\n";
cin>>x;

switch(x)
{
    case1;
    for(i=0;(i<100&&str[i]!='\0';i++)
    str[i]=str[i]+5;

    cout<<"Encrypted string:"<<str<<end1;
    break;

    case2;
    for(i=0;(i<100&&str[i]!='\0');i++)
    str[i]=str[i]-5;

    cout<<"Decrypted string:"<<str<<end1;
    break;

    default:
    cout<<"\nInvalid Input!!!!!!\n";
    }
return 0;
}
