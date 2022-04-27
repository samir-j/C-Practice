#include<iostream>
using namespace std;

class stud{
        int rno,marks;
        char name[10];
        public:
        void input();
        void output();
        void search(int);

        };

int main() {
    stud x[5];
    for(int i=0; i<5; i++)
    {
        x[i].input();
    }

    for(int i=0;i<5; i++)
    {
        x[i].output();
    }

    int r;
cout << "Enter the roll no. to search";
cin>>r;
for(int i=0; i<5;i++)
    {

        x[i].search(r);

    }

    return 0;

}
void stud :: search(int r)
{
if(r==rno){
    output();
}
    }
void stud:: input(){
   cout<<"Enter the name , roll no. & marks";
   cin>>name>>rno>>marks;
}

void stud :: output()
{
    cout<<name<<"\t"<<rno<<"\t"<<marks<<endl;
}
