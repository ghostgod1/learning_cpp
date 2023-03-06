#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of lines of stars: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    int row;
    cout<<"Enter no. of row: ";
    cin>>row;

    for(int i = 1; i<=row; i++)
    {
        for(int j = 1; j<=row-i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"Enter number of rows :";
    cin>>row;

    for (int i = 1; i<=5; i++)
    {
        for (int j = 1; j<=5; j++)
        {
            if((i+j)>5)
            {
            cout<<"*";
            }
            else
            {
            cout<<" ";
            }
        }
        cout<<endl;
    }

    cout<<"Enter number of rows :";
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if(i<=j)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    cout<<"Enter number of rows :";
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if(i<=j)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    cout<<"Enter number of rows :";
    cin>>row;

    for (int i = 1; i<=5; i++)
    {
        for (int j = 1; j<=5; j++)
        {
            if((i+j)>5)
            {
            cout<<"* ";
            }
            else
            {
            cout<<" ";
            }
        }
        cout<<endl;
    }
}