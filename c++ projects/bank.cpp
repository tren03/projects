#include<iostream>
#include<ctime>
using namespace std;
class Bank
{
    public:
    float account_balance=0;
    void passb()
    {
        float arr[50];
        cout<<"*** passbook ***"<<endl;
        //not completed
        

    }
    void t()
    {   
    time_t t= time(0);
    char *ch = ctime(&t);
    cout<<ch;
    }
    float validate()
    {
        float a;
        while(1)
        {        
            //cout<<"enter a number "<<endl;
            cin>>a;
            if(cin.fail())
            {
                cout<<"wrong input ,enter again ";
                cin.clear();
                cin.ignore(100,'\n');
            }
            else
            {
                break;
            }
        }
        return a;
    }
    void deposit()
    {
        cout<<"Enter amount to be deposited : ";
        float amtd = validate();
        //cin>>amtd;
        account_balance+=amtd;
        cout<<"The amount "<<amtd<<" has been credited at"<<endl;
        t();
    }
    void withdraw()
    {
        int c=1;
        while(c==1)
        {
            cout<<"Enter amount to be withdrawn : ";
            float amtw=validate();
            //cin>>amtw;
            if(amtw>account_balance)
            {
                cout<<endl<<"Insufficient account balance"<<endl;
                cout<<"press 1 if you would like to try again or 0 to go back :";
                c=validate();
                cout<<endl;
            }
            else
            {
                account_balance-=amtw;
                c=0;
            }
        }   

    }
    void check_bal()
    {
        cout<<"Your current balance is : "<<account_balance<<" at ";
        t();
    }

};
int main()
{
    Bank b;
    int ch;    
    int c=1;
    while(c==1)
    {
        cout<<endl<<"**** BANK ****"<<endl;
        cout<<"1. check balance"<<endl<<"2. deposit"<<endl<<"3. withdraw"<<endl<<"4. exit"<<endl;
        cout<<endl<<"enter option 1,2 or 3"<<endl;
        ch=b.validate();
        switch(ch)
        {
            case 1: b.check_bal();
            break;
            case 2: b.deposit();
            break;
            case 3: b.withdraw();
            break;
            case 4: c=0;
            cout<<"thank you visit again";
            break;
            default: cout<<"invalid input, please try again"<<endl;
        } 
    }
}
