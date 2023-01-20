#include<iostream>
using namespace std;
int main()
{
    int m1, m2, m3;
    float avg;

    cout<<"Enter marks in three subjects"<<endl;
    cin>>m1>>m2>>m3;

    avg = (m1+m2+m3)/3.0;

    if(avg > 60)
    {
        cout<<"Grade is A";
    }
    else if(avg <= 60 && avg >40)
    {
        cout<<"Grade is B";
    }
    else
    {
        cout<<"Grade is C";
    }
}