#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter no. : ";
    cin>>n;

    for(int i = 2; i<n; i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }

    if(count == 0)
    {
        cout<<"Given No. is Prime"<<endl;
    }
    else
    {
        cout<<"Given No. is not Prime"<<endl;
    }
}