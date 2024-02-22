/* Program to find the Sum of all digits of any 4 digit number */
#include<iostream>
using namespace std;
int main()
{
    int a,n,sum=0;
    cout<<"Enter Any 4 digit Number : "<<endl;
    cin>>a;
    n = a;
    sum = sum + n % 10;
    n = n / 10;
    sum = sum + n % 10;
    n = n / 10;
    sum = sum + n % 10;
    n = n / 10;
    sum = sum + n % 10;
    cout<<"The Sum of all digits of "<<a<<" is : "<<sum<<endl;
    return 0;
}