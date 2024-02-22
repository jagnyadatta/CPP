/*Write a C++ Program to find Simple Interest*/
#include<iostream>
using namespace std;
int main()
{
    int principal,time,rate;
    float simpleInt;
    cout<<"Enter The Value of Principal : "<<endl;
    cin>>principal;
    cout<<"Enter The Time(in year) : " <<endl;
    cin>>time;
    cout<<"Enter The Rate of Interest : "<<endl;
    cin>>rate;
    simpleInt =(float)(principal * time * rate)/100;
    cout<<"Simple interest is : "<<simpleInt<<endl;
    return 0;
}