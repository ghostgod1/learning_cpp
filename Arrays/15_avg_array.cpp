#include<iostream>
using namespace std;
int main()
{
    int A[10],n,sum=0;

    cout<<"Enter length of Array: ";
    cin>>n;

    cout<<"Enter elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
        sum+=A[i];
    }

    cout<<"Average of array = "<<sum/n;
    
}