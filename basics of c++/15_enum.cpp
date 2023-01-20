#include<iostream>
using namespace std;
enum day {mon,tue,wed,thu,fri,sat,sun};
enum dept{cs=1,it,ai,ec,mech};

int main()
{
    day d;
    d = tue;
    cout<<d<<endl;

    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;

    cout<<cs<<endl;
    cout<<it<<endl;
    cout<<ai<<endl;
    cout<<ec<<endl;
    cout<<mech<<endl;
}