#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Age: ";
    cin>>age;
    
    if (age>12 && age<50)
    {
        cout<<"Young \n";
    }
    else
    {
        cout<<"not Young \n";
    }

    if (age<12 || age>50)
    {
        cout<<"Eligible  \n";
    }
    else
    {
        cout<<"Not eligible \n";
    }
}