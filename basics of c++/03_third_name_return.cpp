#include<iostream>
using namespace std;
int main()
{
    cout<<"May I know your name \n";
    string name;
    //cin>>name;
    getline(cin,name);
    cout<<"welcome "<<name;
    return 0;
}