#include<iostream>
using namespace std;


class alpha
{
    protected:
    int a;
    public:
        void input();
};
class beta : public alpha

{

    int b;
public:
    void get();
    void output();

};

int  main()
{
    beta x;
    x.input();
    x.get();
    x.output();
    return 0;
}

void alpha :: input ()
{

    cout<<"ENTER the NUMBER"<<endl;
    cin>>a;
}

void beta :: get()
{
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>b;
}

void beta :: output()
{
    cout<<a+b;
}
