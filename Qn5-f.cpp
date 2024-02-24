/* Difference between Sum of product of consecutive even digits except 2
and 6 and Sum of product of consecutive odd digits except 3 and 7 of any 4 digit
number */
#include <iostream>
using namespace std;
int main() 
{
    int num,fourth_place,third_place,second_place,unit_place;
    int sumEven,sumOdd,difference;
    cout << "Enter Any Four Digit Number : "<<endl;
    cin >> num;
    fourth_place = num / 1000;
    third_place = (num / 100) % 10;
    second_place = (num / 10) % 10;
    unit_place = num % 10;
    sumEven = ((second_place != 2 && second_place != 6) && (unit_place != 2 && unit_place != 6)) ? (second_place * unit_place) : 0;
    sumOdd = ((second_place != 3 && second_place != 7) && (unit_place != 3 && unit_place != 7)) ? (second_place * unit_place) : 0;
    difference = sumEven - sumOdd;
    cout<< "Sum of product of consecutive even digits : " <<sumEven<<endl;
    cout<< "Sum of product of consecutive odd digits  : " <<sumOdd<<endl;
    cout<< "Difference is : " <<difference<<endl;

    return 0;
}