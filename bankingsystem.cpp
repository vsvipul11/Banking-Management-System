#include<bits/stdc++.h>
#include<conio.h>


#include<iostream>

using namespace std;
class bank
{
          char name[100];
          char add[100];
          char y;
          int balance=0;
    public:
         void open_account();
         void deposite_money();
         void withdraw_money();
         void display_account();
         };

   void bank::open_account()
   {
  cout<<" WELCOME TO VIP BANK OF INDIA "<<endl;
  cout<<"Please fill the form with to open an account"<<endl;
  cout<< "enter your full name  :: ";
        cin.ignore();
       cin.getline(name,100);
        cout<<"\n enter your address :: ";
         cin.ignore();
       cin.getline(add,100);
      cout<<"\n what type of account you want to open saving(s) or current(c) \n";
        cin>> y;
        cout<<"enter amount for deposit ";
        cout<< "\n Minimum amount to deposit is 1000"<<endl;
        cin>> balance;
         if(balance<1000){
           cout<<"Low amount"<<endl; 
         }else{
           cout<<"Account created"<<endl;
         }
        
        }
        void bank::display_account()
{
  cout<<" WELCOME TO VIP BANK OF INDIA "<<endl;
  cout<<"Your details are as follows"<<endl;
 cout<<" your full name::\t"<<name;

 cout<<"\n your address:: \t"<<add;
cout<<"\n type of account that you open:: \t"<<y;
cout<<"\n initial amount you deposit ::"<< balance;
        }
        void bank::deposite_money()
        {
             char q;
           int a;
          cout<<"enter how much you deposit :: ";
          cin>>a ;
           balance+=a;
        cout<<"\n total amount you deposit :: \t"<<balance;
        }

          void bank::withdraw_money()
         {
              float amount,b;
              cout<< "\n Withdraw: ";
              cout<< "\n Enter amount to Withdraw :: ";
              cin>>amount;
              balance-=amount;
              if(balance<0){
                cout<<"Transaction unsuccessfull due to insufficient balance"<<endl;
                
              }
              else if(balance<=100&&balance>0){
                cout<<"transaction succesfull"<<endl;
                cout<<"Your balance is low!!!"<<endl;
                cout<<"Available balance is "<<balance<<endl;
              }else {
                cout<<"transaction successfull"<<endl<<"Available balance is "<<balance<<endl;
              }
              
              }

int main()
{
    int ch;
    bank obj;
    char n,x;
  do
  {
 cout<<"\n1) open account \n";
 cout<<"2)deposit money \n";
 cout<<"3) withdraw money \n";
 cout<<"4) Display account \n";
 cout<<"5) exit\n";
 cout<<"select the option from above \n";
 cin>>ch;
 system("cls");
 switch(ch)
 {
  case 1:
    cout<<"1) open account \n";

    obj.open_account();
    break;

    case 2:
        cout<<"2)deposit money \n";
        obj.deposite_money();
          break;
    case 3:
  cout<<"3) withdraw money \n";
  obj.withdraw_money() ;
break;
case 4:
 cout<<"4) Display account \n";
 obj.display_account();
break;
case 5:
     if(ch==5)
     {
              exit(1);
              }

default:
        cout<<"this is not exist try again \n";
        }

 cout<<"\n do you want select next option then press :: y \n";
 cout<<"\n if you want to exit then press:: N ";
   x=getch();
 if(x=='n'||x=='N')
  exit(0);

       }
       while(x=='y'||x=='Y');
getch();
return 0;

}




