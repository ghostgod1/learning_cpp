#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter A :";
    cin>>a;

    cout<<"Menu \n";
    cout<<"1.Add \n"<<"2.Subtract \n"<<"3.Multiply \n"<<"4.Divide \n";

    int choice;
    cout<<"Enter Choice : ";
    cin>>choice;

    cout<<"Enter B : ";
    cin>>b;



    switch(choice)
    {
        case 1: cout<<"Addition is : "<<a+b;
        break;

        case 2: cout<<"Subtraction is : "<<a-b;
        break;

        case 3: cout<<"Multiplication is : "<<a*b;
        break;

        case 4: cout<<"Division is : " <<a/b;
        break;

        default: cout<<"INVALID CHOICE";
    }

}