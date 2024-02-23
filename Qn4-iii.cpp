/* Program to Find the value available at position required by user it may be 10,100 or 1000?*/
#include<iostream>
using namespace std;
int main()
{
    int choice,n,fourth_place,third_place,second_place,unit_place;
    cout<<"Enter The Any Four Digit Number : "<<endl;
    cin>>n;
    fourth_place = n /1000;
    n = n % 1000;
    third_place = n / 100;
    n = n % 100;
    second_place = n / 10;
    n = n % 10;
    unit_place = n;
    cout<<"Enter=>>>\n1-for 1000th place \n2-for 100th place\n3-for 10th place"<<endl;
    cin>>choice;
    (choice == 1)? (cout<<"1000th place value = "<<fourth_place*1000) : (choice == 2) ? (cout<<"100th Place value = "<<third_place * 100): (choice == 3)? (cout<<"10th place value = "<<second_place * 10): (cout<<"Invalid Input....!");
    return 0;
}