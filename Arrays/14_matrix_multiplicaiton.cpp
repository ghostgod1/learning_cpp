#include<iostream>
using namespace std;
int main()
{
    int A[10][10],B[10][10],C[10][10],row1,col1,row2,col2;

    cout<<"Enter number of row and columns in First Matrix: ";
    cin>>row1>>col1;
    
    cout<<"Enter number of row and columns in Second Matrix : ";
    cin>>row2>>col2;

    while (col1!=row2)
    {
        cout<<"ERROR! column of first matrix not equal to row of second matrix. ";

        cout<<"Enter number of row and columns in First Matrix: ";
        cin>>row1>>col1;
    
        cout<<"Enter number of row and columns in Second Matrix : ";
        cin>>row2>>col2;
    }
    
    cout<<"Enter elements of First matrix : "<<endl;
    for(int i = 0; i < row1 ; ++i)
    {
        for (int j = 0; j < col1; ++j)
        {
            cout<<"Enter element a"<<i+1<<j+1<<" : ";
            cin>>A[i][j];
        } 
    }

    cout<<"Enter elements of Second matrix : "<<endl;
    for(int i = 0; i < row2 ; ++i)
    {
        for (int j = 0; j < col2; ++j)
        {
            cout<<"Enter element a"<<i+1<<j+1<<" : ";
            cin>>B[i][j];
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            C[i][j]=0;
        }
    }
    

    for (int i = 0; i < row1; ++i)
    {
        for (int j = 0; j < col2; ++j)
        {
            for (int k = 0; k < col1; ++k)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout<<endl<<"Output Matrix: "<<endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout<<" "<<C[i][j];
            if(j == col2-1)
                cout<<endl;
        }  
    }
    return 0;
}