#include<iostream>
using namespace std;
int main()
{
    int A[100],len,mid,start,end,key;

    cout<<"Enter length of array : ";
    cin>>len;

    start = 0;
    end = len-1;

    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<"A["<<i<<"] = ";
        cin>>A[i];
    }

    cout<<"Array = [";
    for(int i=0;i<len;i++)
    {
        cout<<A[i]<<",";
    }
    cout<<"]"<<endl;

    cout<<"Enter key to be searched :";
    cin>>key;


    while(start<=end)
    {
        mid = (start + end)/2;

        if(key == A[mid])
        {
            cout<<"key found at "<<mid;
            return 0;
        }
        else if(key<A[mid])
        {
            end = mid-1;
        }
        else if(key>A[mid])
        {
            start = mid + 1;
        }
    }
    cout<<"key not found.";
}