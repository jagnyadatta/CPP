/* Sum of product of consecutive odd digits of any 4 digit number? Supoose
num=1356 then output= 5*3+ 3*1 */
#include <iostream>
using namespace std;
int main()
{
    int num,fourth_place,third_place,second_place,unit_place,sum=0;
    cout<<"Enter Any four Digit Number : "<<endl;
    cin>>num;
    fourth_place = num / 1000;
    third_place = (num / 100) % 10;
    second_place = ( num / 10) % 10;
    unit_place = num % 10;
    sum = ((second_place % 2 != 0 && unit_place % 2 != 0) ? (second_place * unit_place) : 0);
    sum += (third_place % 2 != 0 && second_place % 2 != 0) ? (third_place * second_place) : 0;
    cout<<"Sum of product of consecutive even digits: "<<sum<<endl;
    return 0;
}