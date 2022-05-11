#include<iostream>
using namespace std;

int main()
{
    int a[5],i,no,top=4,bottom=0,k=0,mid;

    for(i=0; i<5; i++)
    {
        cout<<"Enter The No. : ";
        cin>>a[i];
    }
    cout<<"Enter The Number To Be Search :" ;
    cin>>no;


    for(i=0;i<5;i++)
    {

        mid=(top+bottom)/2;

        if(a[mid]==no)
        {
            cout<<"Found"<<mid;
            k=1;
            break;
        }
        else
            if(a[mid]>no)
            {
                bottom=mid;
            }
            else
                if(a[mid]<no)
            {
                top=mid+1;
            }

            if(k==0)
             cout<<"Not Found";

    }
}
