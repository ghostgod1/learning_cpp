#include<iostream>
using namespace std;
int main()
{
    float net,basic,allowance,deductions;

    cout<<"Enter Basic salary"<<endl;
    cin>>basic;
    cout<<"Enter percentage of allowances"<<endl;
    cin>>allowance;
    cout<<"Enter percentage of deductions"<<endl;
    cin>>deductions;

    net = basic + basic * allowance / 100 - basic * deductions/100;

    cout<<"Net Salary is "<<net;
}