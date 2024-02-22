/* Program to find the face value and position value of any 4 digit number */
#include<iostream>
using namespace std;
int main()
{
    int n,fourth_place,third_place,second_place,unit_place;
    cout<<"Enter Any Four Digit Number : "<<endl;
    cin>>n;
    fourth_place = n /1000;
    n = n % 1000;               //here n = xxx
    third_place = n / 100;
    n = n % 100;                //here n = xx
    second_place = n / 10;
    n = n % 10;                 //here n = x
    unit_place = n;
    cout<<"===================================================="<<endl;
    cout<<"Position\tFace Value\tPosition Value"<<endl;
    cout<<"===================================================="<<endl;
    cout<<"Thousand :\t"<<fourth_place<<"\t\t"<<fourth_place * 1000<<endl;
    cout<<"Hundred  :\t"<<third_place<<"\t\t"<<third_place * 100<<endl;
    cout<<"Tenth    :\t"<<second_place<<"\t\t"<<second_place * 10<<endl;
    cout<<"Unit     :\t"<<unit_place<<"\t\t"<<unit_place<<endl;
    cout<<"===================================================="<<endl;
    return 0;
}