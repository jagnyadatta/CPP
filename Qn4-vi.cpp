/* Write a program to find bitwise and, or, and xor of 2 nd and 4 th digit of any 4 digit number? */
#include<iostream>
using namespace std;
int main()
{
    int num,second_Num,fourth_Num,bit_And,bit_Or,bit_Xor;
    cout<<"Enter Any Four Digit Number : "<<endl;
    cin>>num;
    second_Num = (num / 10) % 10;
    fourth_Num = num / 1000;
    cout<<"Second Digit is : "<<second_Num<<endl;
    cout<<"Fourth Digit is : "<<fourth_Num<<endl;
    bit_And = second_Num & fourth_Num;
    bit_Or = second_Num | fourth_Num;
    bit_Xor = second_Num ^ fourth_Num;
    cout<<"Bitwise AND : "<<bit_And<<endl;
    cout<<"Bitwise OR  : "<<bit_Or<<endl;
    cout<<"Bitwise XOR : "<<bit_Xor<<endl;
    return 0;
}