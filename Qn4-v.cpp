/* find sum of product of corresponding digits of two any 4 digit
number Such as n=1234 m=7896 output=6*4+9*3+8*2+7*1 */
#include <iostream>
using namespace std;
int main()
{
    int Num1,Num2,firstDig_1,firstDig_2,firstDig_3,firstDig_4;
    int SecondDig_1,SecondDig_2,SecondDig_3,SecondDig_4,sum=0;
    cout<<"Enter The First Four Digit Number : "<<endl;
    cin>>Num1;
    cout<<"Enter The Second Four Digit Number : "<<endl;
    cin>>Num2;
    //First Number digits....
    firstDig_1 = Num1 / 1000;
    firstDig_2 = (Num1 / 100) % 10;
    firstDig_3 = (Num1 / 10) % 10;
    firstDig_4 = Num1 % 10;
    //Second Number Digits....
    SecondDig_1 = Num2 / 1000;
    SecondDig_2 = (Num2 / 100) % 10;
    SecondDig_3 = (Num2 / 10) % 10;
    SecondDig_4 = Num2 % 10;
    sum = (firstDig_1 * SecondDig_1) + (firstDig_2 * SecondDig_2) + (firstDig_3 * SecondDig_3) + (firstDig_4 * SecondDig_4);
    cout<<"Sum of Product of Corresponding Digits = "<<sum<<endl;
    return 0;
}