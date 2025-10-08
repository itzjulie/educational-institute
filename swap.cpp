#include<iostream>
using namespace std;


int main()
{
    int a=10;
    int b=20;

    cout<<"Before swap a="<<a<<" b="<<b<<endl;

    //swap logic
    int temp=a;
    a=b;
    b=temp;

    cout<<"After swap a="<<a<<" b="<<b<<endl;

    return 0;
}