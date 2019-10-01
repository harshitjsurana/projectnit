#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    int w,x,y,z,p;
    cout << "Enter w:" ;
    cin>>w;
    cout << "Enter x:" ;
    cin>>x;
    cout << "Enter y:" ;
    cin>>y;
    cout << "Enter z:" ;
    cin>>z;
    p=(w+x)/(y-z);  // replaced '//' to / for division
    cout<<"\n"<<"P:"<<p;  //p' doesnot exist so corrected to p
    return 0;
}
