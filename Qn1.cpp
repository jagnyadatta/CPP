/* Write A C++ Program to Print Your Biodata */
#include<iostream>
using namespace std;
int main()
{
    string fname,lname,department,branch;
    int rollNo;
    long long phNo;
    cout<<"=====================BIODATA====================="<<endl;
    cout<<"Enter Your First Name: "<<endl;
    cin>>fname;
    cout<<"Enter Your Last Name : "<<endl;
    cin>>lname;
    cout<<"Enter Your Department Name :"<<endl;
    cin>>department;
    cout<<"Enter Your Branch Name :"<<endl;
    cin>>branch;
    cout<<"Enter Your Roll No : "<<endl;
    cin>>rollNo;
    cout<<"Enter Your Mobile Numbr : "<<endl;
    cin>>phNo;
    cout<<"=====================Your BIODATA====================="<<endl;
    cout<<"Name       : "<<fname<<" "<<lname<<endl;
    cout<<"Department : "<<department<<endl;
    cout<<"Branch     : "<<branch<<endl;
    cout<<"Roll No    : "<<rollNo<<endl;
    cout<<"Mob. No    : "<<phNo<<endl;
    return 0;
}