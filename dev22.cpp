/*bank management system
      bob*/
#include<iostream>
using namespace std;
class bob{
    int accno;
    int rof;
    int time;
    string name,address;
    char accounttype;
    float amount_deposit,balance,amount_withdrawl,intr_rate;
    public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void interest_rate();
    void all_detail();
    
};

void bob::open_account(){
    cout<<"\t\t\t\tCreate an account"<<endl;
    cout<<"Enter your name:(First Letter Written in capital)"<<endl;
    cin>>name;
    cout<<"Enter your accno: (Only 5 words)"<<endl;
    cin>>accno;
    cout<<"Enter your accounttype: Press (s) for saving & Press (c) for current."<<endl;
    cin>>accounttype;
    cout<<"Enter your balance:"<<endl;
    cin>>balance;
    cout<<"Enter your address:"<<endl;
    cin>>address;  
    cout<<"\t\t\t\tAccount created successfully"<<endl;
}
void bob::deposite_money(){
     cout<<"Amount deposite:"<<endl;
    cin>>amount_deposit;
balance=balance+amount_deposit;
cout<<"Balance after deposite:"<<balance<<endl;
}
void bob::withdraw_money(){
     cout<<"Amount withdrawl"<<endl;
    cin>>amount_withdrawl;  
balance=balance-amount_withdrawl;
cout<<"Balance after withdraw:"<<balance<<endl;
}
void bob::interest_rate(){
    cout<<"ROI:"<<endl;
    cin>>rof;
   cout<<"TIME:"<<endl;
    cin>>time;
    intr_rate=(balance*rof*time)/100;
    cout<<"amount of interest rate: "<<intr_rate<<endl;
    balance=balance+intr_rate;
    cout<<"balance after interest: "<<balance<<endl;
}
void bob::all_detail(){
    cout<<"\t\t\tAll details"<<endl;
   cout<<"Name: "<<name<<endl;
   cout<<"Address: "<<address<<endl;
   cout<<"Accno: "<<accno<<endl;
   cout<<"Account type: "<<accounttype<<endl;
   cout<<"Amount deposite: "<<amount_deposit<<endl;
   cout<<"Amount withdrawl: "<<amount_withdrawl<<endl;
   cout<<"interest rate at particular rate and time:"<<intr_rate<<endl;
   cout<<"Balance left after particular time and interest : "<<balance<<endl;
  
}
int main(){
bob customer;
customer.open_account();
customer.deposite_money();
customer.withdraw_money();
customer.interest_rate();
customer.all_detail();
return 0;
}