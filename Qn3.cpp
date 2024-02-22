/* Write C++ Program to for Tempreture Convertion */
#include<iostream>
using namespace std;
int main()
{
    int a;
    float fahrenheit=0.0,celcius =0.0;
    cout<<"======================Tempreture Convertion======================"<<endl;
    cout<<"Enter :\n1. for Farhrenheit to Celcius :\n2. for Celcius to Fahrenheit : "<<endl;
    cin>>a;
    if(a==1){
        cout<<"Enter The Value of Fahrenheit : "<<endl;
        cin>>fahrenheit;
        celcius = (fahrenheit - 32)*5/9;
        cout<<"Celcius : "<<celcius<<endl;
    }
    else if(a==2){
        cout<<"Enter The Value of Celcius : "<<endl;
        cin>>celcius;
        fahrenheit = (9*celcius/5)+32;
        cout<<"Fahrenheit : "<<fahrenheit<<endl;
    }
    else{
        cout<<"Enter a Valid Input....!"<<endl;
    }
    return 0;
}