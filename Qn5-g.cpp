/*Write a C++ program to find sum of product of corresponding even digits of
first any digit number and corresponding odd digit of any 4 digit number Such as
n=1234 m=4567 output=4*7+2*5 */
#include <iostream>
using namespace std;
int main() {
    int num1, num2,thousands1,hundreds1,tens1,units1,thousands2,hundreds2,tens2,units2;
    cout << "Enter the first 4-digit number: "<<endl;
    cin >> num1;
    cout << "Enter the second 4-digit number: "<<endl;
    cin >> num2;

    thousands1 = num1 / 1000;
    hundreds1 = (num1 / 100) % 10;
    tens1 = (num1 / 10) % 10;
    units1 = num1 % 10;

    thousands2 = num2 / 1000;
    hundreds2 = (num2 / 100) % 10;
    tens2 = (num2 / 10) % 10;
    units2 = num2 % 10;

    int sum = ((tens1 % 2 == 0 && units2 % 2 != 0) ? (tens1 * units2) : 0) +
              ((units1 % 2 == 0 && tens2 % 2 != 0) ? (units1 * tens2) : 0);
    cout << "Sum of product of corresponding even and odd digits: " << sum <<endl;

    return 0;
}
