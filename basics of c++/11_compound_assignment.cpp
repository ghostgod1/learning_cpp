#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5,c=15;
    int sum = 5, prod = 1;

    //sum = sum + a;
    sum+=a; //faster
    cout<<sum<<"\n";

    //prod = prod*a*b*c;
    prod*=a*b*c;
    cout<<prod;

    //sum=sum+a+b+c;

}