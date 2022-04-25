#include <iostream>
using namespace std;
class bank
{
    char customer_name[20];
    int account_number;
    float balance;

public:
    void input();
    void output();
    void deposit(int);
    void withdraw(int);
    void check_balance(int);
} ;
void bank ::input()
{
    cout << "enter the account name , acc no. and balance ";
    cin >> customer_name >> account_number >> balance;
}
void bank::output()
{
    cout << customer_name << "\t" << account_number << "\t" << balance << endl;
}
void bank::deposit(int num){
 float deposit;
    if(num==account_number){
        cout<<"enter the amount to be deposited : ";
        cin>>deposit;
        balance=balance+deposit;
    }
}
void bank :: withdraw(int num){
     float withdraw;
    if(num==account_number){
        cout<<"enter the amount to be withdraw : ";
        cin>>withdraw;
        balance=balance-withdraw;
    }

}
void bank :: check_balance(int num){
if(num==account_number){
        output();
    }
}


int main()
{
    int choice, num;
    cout << "enter the details of customers " << endl;
    bank x[2];
    for (int i = 0; i < 2; i++)
    {
        x[i].input();
    }
    cout << "Enter your choice " << endl;
    cout << " 1. Withdraw \n 2.Deposit \n 3.Check my balance  \n4. Exit" << endl;
    cin >> choice;
    cout << "Enter your account number : ";
    cin >> num;
    switch (choice)
    {
    case 1: // withdraw
for (int i = 0; i < 2; i++)
        {
            x[i].withdraw(num);
        }

        break;
    case 2: // deposit
        for (int i = 0; i < 2; i++)
        {
            x[i].deposit(num);
        }
        break;
    case 3: // check balance
    for (int i = 0; i < 2; i++)
        {
            x[i].check_balance(num);
        }
        break;
    case 4: // exit
        cout<<"Thank your for visiting ! \n Have a nice day !";
        break;
    }
    for(int i=0;i<5;i++){
        x[i].check_balance(num);
    }

    return 0;
}
