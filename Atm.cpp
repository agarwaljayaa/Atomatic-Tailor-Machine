#include<bits/stdc++.h>
using namespace std;
class atm
{
    public:
    
    int amount=0,oldpin;
   void select_language()
    {
       cout<<"WELCOME TO NITS BANK\n";
       cout<<"SELECT YOUR LANGUAGE"<<endl;
       cout<<"1-ENGLISH"<<endl;
    //    cout<<"1-TELUGU"<<endl;
    //    cout<<"3-HINDI"<<endl;
    }
    void deposit(int a)
    {
        amount+=a;
        cout<<"AMOUNT IS SUCCESFULLY DEPOSITED"<<endl;
    }
    void withdraw(int b)
    {   
        if(amount>=b)
        { 
        amount-=b;
        cout<<"SUCCESFULLY DEBIITED"<<endl;
        }
        else{
            cout<<"INSUFFICIENT BALANCE"<<endl;
        }
    }
    void balance()
    {
        cout<<"YOUR BALANCE IS"<<endl;
        cout<<amount<<endl;
    }
    void changepin(int p)
    {
            cout<<"ENTER PIN "<<endl;
            oldpin=p;
            cout<<"YOUR PIN SUCCESSFULLY CHANGED"<<endl;
    }
    
};
int main()
{
    atm atmwork;
    
    cout<<"PLEASE INSERT YOUR CARD"<<endl;
    cout<<"AS YOU ARE NEW TO ATM SERVICES ENTER YOUR NEW PIN"<<endl;
    int x;
    cin>>x;
    atmwork.oldpin=x;
    while(1)
    {   cout<<"PLEASE INSERT YOUR CARD"<<endl;
        atmwork.select_language();
        int n,pin;
        cin>>n;
        cout<<"ENTER YOUR PIN"<<endl;
        cin>>pin;
        if(pin==atmwork.oldpin)
        {
        int op,amo,p;
        cout<<"1-DEPOSIT"<<endl;
        cout<<"2-WITHDRAW"<<endl;
        cout<<"3-BALANCE ENQUERY"<<endl;
        cout<<"4-CHANGE PIN"<<endl;
        
        cin>>op;
        switch(op)
        {
            case 1:
            cout<<"ENTER AMOUNT TO DEPOSIT"<<endl;
            cin>>amo;
            atmwork.deposit(amo);
            break;
            case 2:
            cout<<"ENTER AMOUNT TO WITHDRAW"<<endl;
            cin>>amo;
            atmwork.withdraw(amo);
            break;
            case 3:
            atmwork.balance();
            break;
            case 4:
            cin>>p;
            atmwork.changepin(p);
            break;
        }
        }
        else
        {
            cout<<"WRONG PIN PLEASE CHECK YOUR PIN"<<endl;
        }
    }

}