#include<iostream>
using namespace std;
int main()
{
    int A[10],n=10,key;
    cout<<"Enter numbers : ";
    for(int i = 0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter number to be searched : ";
    cin>>key;

    for(int i = 0; i<n; i++)           //Linear Search
    {
        if(key == A[i])
        {
            cout<<"Key found at "<<i;
            return 0;
        }
    }
    cout<<"key not found.";
}