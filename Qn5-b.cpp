/* Write a Program to find Sum of all odd digits of any 4 digit number */
#include<iostream>
using namespace std;
int main()
{
    int num,fourth_place,third_place,second_place,unit_place,sum1,sum2,sum3,sum4,Sum = 0;
    cout<<"Enter Any Four Digit Number : "<<endl;
    cin>>num;
    fourth_place = num / 1000;
    third_place = (num / 100) % 10;
    second_place = ( num / 10) % 10;
    unit_place = num % 10;

    sum1 = fourth_place % 2 != 0 ? fourth_place : 0;
    sum2 = third_place % 2 != 0 ? third_place : 0;
    sum3 = second_place % 2 != 0 ? second_place : 0;
    sum4 = unit_place % 2 != 0 ? unit_place : 0;
    Sum = sum1 + sum2 + sum3 + sum4;
    cout<<"Sum of All Even Digits = "<<Sum<<endl;
    return 0;
}