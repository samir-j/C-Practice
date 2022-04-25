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
  protected:
    int b;
    public:
    void get();

};

class gamma : public beta
{
    int c;
public:
    void get1();
    void output();
};

int main()
{
    gamma x;
    x.input();
    x.get();
    x.get1();
    x.output();
    return 0;
}

void alpha :: input()
{
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>a;
}
void beta :: get()
{
    cout<< "ENTER THE NUMBER"<<endl;
    cin>>b;

}

void gamma :: get1()
{
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>c;
}

void gamma :: output()
{
    cout<<a+b+c;
}
