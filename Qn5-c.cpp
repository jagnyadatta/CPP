/* Difference between average of all even digits except divisible by 4 and
avearge of all odd digits except divisble by 3 of any 4 digit number */
#include<iostream>
using namespace std;
int main()
{
    int num,fourth_place,third_place,second_place,unit_place,count_Even=0,count_Odd=0,Total=0;
    int Sum_Even,Sum_Odd;
    float Avg_Even,Avg_Odd;
    cout<<"Enter Any Four Digit Number : "<<endl;
    cin>>num;
    fourth_place = num / 1000;
    third_place = (num / 100) % 10;
    second_place = ( num / 10) % 10;
    unit_place = num % 10;
    //Sum of all Even Number.....
    Sum_Even = (fourth_place % 2 == 0 && fourth_place % 4 != 0 ? fourth_place : 0)
    +(third_place % 2 == 0 && third_place % 4 != 0 ? third_place : 0)
    +(second_place % 2 == 0 && second_place % 4 != 0 ? second_place : 0)
    +(unit_place % 2 == 0 && unit_place % 4 != 0 ? unit_place : 0);
    //Even Counter.....
    count_Even = (fourth_place % 2 == 0 && fourth_place % 4 != 0 ? 1 : 0)
    +(third_place % 2 == 0 && third_place % 4 != 0 ? 1 : 0)
    +(second_place % 2 == 0 && second_place % 4 != 0 ? 1 : 0)
    +(unit_place % 2 == 0 && unit_place % 4 != 0 ? 1 : 0);
    //Sum of all Odd Number....
    Sum_Odd = (fourth_place % 2 != 0 && fourth_place % 4 != 0 ? fourth_place : 0)
    +(third_place % 2 != 0 && third_place % 4 != 0 ? third_place : 0)
    +(second_place % 2 != 0 && second_place % 4 != 0 ? second_place : 0)
    +(unit_place % 2 != 0 && unit_place % 4 != 0 ? unit_place : 0);
    //Odd Counter.....
    count_Odd = (fourth_place % 2 != 0 && fourth_place % 3 != 0 ? 1 : 0)
    +(third_place % 2 != 0 && third_place % 3 != 0 ? 1 : 0)
    +(second_place % 2 != 0 && second_place % 3 != 0 ? 1 : 0)
    +(unit_place % 2 != 0 && unit_place % 3 != 0 ? 1 : 0);
    //Average of Even Digits.....
    Avg_Even = (float)(Sum_Even / count_Even);
    Avg_Odd = (float)(Sum_Odd / count_Odd);
    Total = Avg_Even - Avg_Odd;
    cout<<"Difference is = "<<Total<<endl;
    return 0;
}