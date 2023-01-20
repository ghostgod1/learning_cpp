#include<iostream>
using namespace std;
int main()
{
    //dynamic declarations are used to save memory by declaring the variables in if statements or enclosing the in {} braces.

    {
        int a=10, b=5;

        if (int d = a+b ; d>b) //d is dynamic declaration and is destroyed after if execution of if block
        {
            int c = a-b; //c is destroyed after execution of if block
            cout<<c;
        }
    }
}