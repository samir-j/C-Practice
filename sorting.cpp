#include<iostream>
using namespace std;

//selection sort - first element is compared with all others and swapped with greater one.

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
        for(j=i+1; j<5; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        cout<<a[i];

    }

}
