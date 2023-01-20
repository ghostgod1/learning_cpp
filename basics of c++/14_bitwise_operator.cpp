#include<iostream>
using namespace std;
int main()
{
    int x = 11, y = 7, z;

    z = x & y;
    cout<<z<<endl;

    z = x | y;
    cout<<z<<endl;

    z = x ^ y;
    cout<<z<<endl;

    char a=20,b;

    b = a<<1;
    cout<<(int)b<<endl;

    b = a>>1;
    cout<<(int)b<<endl;

    y = ~x;
    cout<<(int)y<<endl;

}