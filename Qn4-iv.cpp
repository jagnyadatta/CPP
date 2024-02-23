/* Program to find Sum of product of consecutive digits of any 4 digit number? Supoose
num=1234 then output= 4*3+3*2+2*1 */
#include<iostream>
using namespace std;
int main()
{
    int a,n,fourth_place,third_place,second_place,unit_place,sum=0;
    cout<<"Enter Any Four digit Number : "<<endl;
    cin>>a;
    n=a;
    fourth_place = n / 1000;
    n = n % 1000;
    third_place = n / 100;
    n = n % 100;
    second_place = n / 10;
    n = n % 10;
    unit_place = n;

    sum = fourth_place * third_place;
    sum +=(third_place * second_place);
    sum +=(second_place * unit_place);
    cout<<"The Sum of Product Of "<<a<<" is : "<<sum<<endl;
    return 0;
}