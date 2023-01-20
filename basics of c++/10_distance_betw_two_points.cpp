#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x1,x2,y1,y2,dist;

    cout<<"Enter Values : \n";
    cout<<"x1 = ";
    cin>>x1;
    cout<<"x2 = ";
    cin>>x2;
    cout<<"y1 = ";
    cin>>y1;
    cout<<"y2 = ";
    cin>>y2;

    dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    cout<<"distance = "<<dist;

}