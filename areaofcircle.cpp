#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int radius,area;
    cout << "Enter Radius:" ;
    cin>>radius;
    area=3.14*radius*radius;  //formula should be pi*r*r
    cout<<"\n"<<"area"<<area;
    return 0;
}
