/* Find left shit, right shift and zero fill of summation of all digits of any
4 digit number and it will be shifted by 3 rd digit of any 4 digit number? */
#include <iostream>
using namespace std;
int main() {
    int num,fourth_place,third_place,second_place,unit_place;
    int sum,shiftAmount,leftShiftResult,rightShiftResult,zeroFillResult;
    cout << "Enter a 4-digit number: ";
    cin >> num;
    fourth_place = num / 1000;
    third_place = (num / 100) % 10;
    second_place = (num / 10) % 10;
    unit_place = num % 10;

    sum = fourth_place + third_place + second_place + unit_place;

    shiftAmount = second_place;
    leftShiftResult = sum << shiftAmount;
    rightShiftResult = sum >> shiftAmount;
    zeroFillResult = static_cast<unsigned int>(sum) >> shiftAmount;

    cout << "Sum of all digits: " << sum <<endl;
    cout << "Left shift by " << shiftAmount << ": " << leftShiftResult <<endl;
    cout << "Right shift by " << shiftAmount << ": " << rightShiftResult <<endl;
    cout << "Zero fill right shift by " << shiftAmount << ": " << zeroFillResult <<endl;

    return 0;
}