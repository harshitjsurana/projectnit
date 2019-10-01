#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int m1,m2,m3,m4,m5,average;
    cout << "Enter Marks Obtained In 1st Subjects:";
      cin>>m1;
    cout << "Enter Marks Obtained In 2nd Subjects:";
      cin>>m2;
    cout << "Enter Marks Obtained In 3rd Subjects:";
      cin>>m3;
    cout << "Enter Marks Obtained In 4th Subjects:";
      cin>>m4;
    cout << "Enter Marks Obtained In 5th Subjects:";
    cin>>m5;
    cout<<"Average="<<"("<<m1<<"+"<<m2<<"+"<<m3<<"+"<<m4<<"+"<<m5<<")"<<"/5"
    average=(m1+m2+m3+m4+m5)/5;
    cout<<"\n"<<"Average Marks:"<<average;
    return 0;
}
