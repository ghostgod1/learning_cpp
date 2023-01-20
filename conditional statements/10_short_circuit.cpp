#include<iostream>
using namespace std;
int main()
{
    int a = 10, b = 5, i = 5;

    //And short circuits if the first parameter/condition is false
    if (a > b && ++i > b)
    {
        cout<<"since the condition a > b is true ++i is executed"<<endl;
        cout<<i;
    }

    //now value of i is 6
    if (a < b && ++i > b)
    {
        cout<<"since the condition a < b is false ++i is not executed"<<endl;
        cout<<i;
    }

    //Or short circuits the parameter if first parameter is true
    //value of i remains the same that is 6
    if (a > b || ++i > b)
    {
        cout<<"since the condition a > b is true or i is not executed"<<endl;
        cout<<i;
    }

    //value of i remains the same that is 6
    if (a < b || ++i > b)
    {
        cout<<"since the condition a < b is false or i is executed"<<endl;
        cout<<i;
    }
}