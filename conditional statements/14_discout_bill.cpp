#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float total_amt,discount;

    cout<<"Enter Total amount : ";
    cin>>total_amt;

    if(total_amt>=500)
    {
        discount = total_amt*20/100;
    }
    else if(total_amt>= 100 && total_amt < 500)
    {
        discount = total_amt*10/100;
    }

    cout<<"Total Amount : "<<total_amt<<endl;
    cout<<"Discount : "<<discount<<endl;
    cout<<"Discounted Amount : "<<ceil(total_amt - discount)<<endl;

}