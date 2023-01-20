#include<iostream>
using namespace std;
int main()
{
    //pre increment ++x
    //post increment x++
    //pre decrement --x
    //post decrement x--

    int i = 5;
    //i = i + 1;
    //i += 1
    i++;
    cout<<i<<"\n";

    int x = 5, y;

    y=x++;  //assign(=) takes places first then increment
    cout<<"post increment"<<"\n";
    cout<<"x = "<<x<<"\n";
    cout<<"y = "<<y<<"\n";


    y=++x;  //increment takes places first then assignment(=)
    cout<<"pre increment"<<"\n";
    cout<<"x = "<<x<<"\n";
    cout<<"y = "<<y<<"\n";

   

}