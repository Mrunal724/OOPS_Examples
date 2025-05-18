// Bank Account System

// Base Class: Bank
// Attribute: bankName
// Method: displayBankName()

// Derived Class: Account
// Attributes: accountHolder, balance
// Method: displayAccountDetails()

// 📝 Task:
// Create a derived class object and display both bank name and account details.


#include<iostream>
#include<string>
using namespace std;

class Bank{
  public:
  string bankName;
  Bank(string bankName){
      this->bankName = bankName;
  }
};

class Account : public Bank{
    public:
    string accountHolder;
    double balance;
    Account(string bankName, string accountHolder, double balance) : Bank(bankName){
        this->accountHolder = accountHolder;
        this->balance = balance;
    }
    
    void displayAccountDetails(){
        cout<<"The Bank name is "<<bankName<<endl;
        cout<<"The Account Holder name is "<<accountHolder<<endl;
        cout<<"The balance of this account is "<<balance<<endl;
        cout<<"----------------------"<<endl;
    }
    
};

int main(){
    

    Account A1("SBI", "Mrunal Baviskar", 20000);
    A1.displayAccountDetails();
    
    Account A2("BOI", "Prachiti Parate", 100000);
    A2.displayAccountDetails();
    
    return 0;
}