/* WAP to find diffrence between the largest and smallest digit of any digit of any digit number */
//let us take 4 digit number.
#include <iostream>
using namespace std;
int main()
{
    int num,thousands,hundreds,tenths,unit;
    int largest,smallest,difference;
    cout<<"Enter Any four digit Number : "<<endl;
    cin>>num;
    thousands = num / 1000;
    hundreds = (num % 1000)/100;
    tenths = (num % 100)/10;
    unit = num % 10;
    //For largest Value.....
    if(thousands>hundreds && thousands>tenths && thousands>unit)
    {
        largest = thousands;
    }
    else if(hundreds>thousands && hundreds>tenths && hundreds>unit)
    {
        largest = hundreds;
    }
    else if(tenths>thousands && tenths>hundreds && tenths>unit)
    {
        largest = tenths;
    }
    else
    {
        largest = unit;
    }
    cout<<"Largest is : "<<largest<<endl;
    //For Smallest Value....
    if(thousands<hundreds && thousands<tenths && thousands<unit)
    {
        smallest = thousands;
    }
    else if(hundreds<thousands && hundreds<tenths && hundreds<unit)
    {
        smallest = hundreds;
    }
    else if(tenths<thousands && tenths<hundreds && tenths<unit)
    {
        smallest = tenths;
    }
    else
    {
        smallest = unit;
    }
    cout<<"Smallest is : "<<smallest<<endl;
    difference = largest - smallest;
    cout<<"Difference between Largest and Smallest is : "<<difference<<endl;
    return 0;
}