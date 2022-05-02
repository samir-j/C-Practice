#include<iostream>
#include<string.h>
using namespace std;

class alpha
{
    char str[10];
    public:
    void input();
    void output();
    void operator=(alpha);

};

int main ()
{

   alpha x,y;
   x.input();
   y.input();
   x=y;                       //it works as x.=(y)
   return 0;


}

void alpha :: input()
{
    cout<<"enter the string"<<endl;
    cin>>str;
}

void alpha :: operator=(alpha y)
{
    char temp[10];
    strcpy(temp,str);
    strcpy(str,y.str);
    strcpy(y.str,temp);
    cout<<str;
    cout<<y.str;

}







