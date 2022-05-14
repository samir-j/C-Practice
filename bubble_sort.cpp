#include<iostream>
using namespace std;
//Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until
//they are not in the intended order.

int main()
{
    int a[5], i,j,temp=0;

    for(i=0;i<5; i++)
    {
     cout<<"Enter the numbers of  array : ";

        cin>>a[i];
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    cout<<"Array after implementation bubble sort is : ";
    for(i=0;i<5; i++)
     cout<<a[i];
}
