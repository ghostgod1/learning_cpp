#include<iostream>
using namespace std;
int main()
{
    int A[10] = {3,4,10,12,5};

    /*
    for(int i; i<9; i++)
    {
        cout<<A[i]<<endl;
    }
    */

    for(int x:A)
        cout<<x<<endl;

    return 0;
}