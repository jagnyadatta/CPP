/* WAP to find sum of product of corresponding even digit of first any digit number with thye odd digit of 2nd any digit number 
n1 = 1248
n2 = 2579
output = 8*9+4*7+2*5
*/
#include <iostream>
using namespace std;
int main()
{
    int n1,n2,thousand1,thousand2,hundred1,hundred2,tenth1,tenth2,unit1,unit2,sum = 0;
    cout<<"Enter the First Four digit number : "<<endl;
    cin>>n1;
    cout<<"Enter the Second Four digit number : "<<endl;
    cin>>n2;
    //Extract First Number....
    thousand1 = n1 / 1000;
    hundred1 = (n1 % 1000)/100;
    tenth1 = (n1 % 100)/10;
    unit1 = n1 % 10;
    //Extract Second Number....
    thousand2 = n2 / 1000;
    hundred2 = (n2 % 1000)/100;
    tenth2 = (n2 % 100)/10;
    unit2 = n2 % 10;
    //Sum of Product of Numbers...
    sum = unit1 * unit2 + tenth1 * tenth2 + hundred1 * hundred2;
    cout<<"Sum of Product of two number is : "<<sum<<endl;
    return 0;
}