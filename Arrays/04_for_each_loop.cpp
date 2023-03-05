#include<iostream>
using namespace std;
int main()
{
    int A[6] = {8,6,3,9,7,4};

    for (int x:A)     //for each loop doesn't change the value in array
    {
        cout<<x<<endl;
    }

    for (int &a : A)  //reference variable change the value in array
    {
        cout<<++a<<endl;
    }

    for (auto b : A) //if we dont know datatype then we can use auto
    {
        cout<<b<<endl;
    }
}