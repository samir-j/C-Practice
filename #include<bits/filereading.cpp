#include<bits/stdc++.h>

using namespace std;

int main()
{
    int lines=0,tabs=0,character=0,blank=0;
    ifstream fin("abc.txt");
    char ch;

    while(fin)
    {
        fin.get(ch);


        if(ch=='\n')
        {
            lines++;
        }
        if(ch==' ')
        {
            blank++;
        }
        if(ch=='\t')
        {
            tabs++;
        }
        else{
            character++;
        }
    }
    fin.close();
   cout<<"no of line = "<<lines<<endl;
   cout<<"no of tabs = "<<tabs<<endl;
   cout<<"no of characters = "<<character<<endl;
   cout<<"no of blank = "<<blank<<endl;
    return 0;

}
