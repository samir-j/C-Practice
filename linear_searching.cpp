#include<iostream>
using namespace std;

int main()\
{
    int a[5],i,no,k;

    for(i=0; i<5; i++)
    {
        cout<<"Enter The No.";
        cin>>a[i];
    }
    cout<<"Enter The Number To Be Search :" ;
    cin>>no;
    k=0;
    for(i=0; i<5; i++)
        {
        if(a[i]==no)
        {
            k=1;
            cout<<"Found  at : "<<i;

        }

    }
    if(k==0)
    cout<<"Not Found";
}
