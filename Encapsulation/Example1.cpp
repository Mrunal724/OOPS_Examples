/*1. Encapsulation (Basic Level)

Definition:
Encapsulation is the concept of bundling the data (attributes) 
and methods (functions) that operate on the data into a single 
unit known as a class. 
It also restricts direct access to some of an object's components,
 which is usually achieved using access specifiers (private, protected, public).

Explanation:
Private Attributes: Can only be accessed within the class.
Public Methods: Allow controlled access to private attributes.

Practice Tasks:
Bank Account System (Encapsulation):
Create a class BankAccount with private attributes like balance, accountHolder, etc.
Use public getter and setter methods to access and modify these attributes.

Write a method to deposit money and check the balance.

*/

#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
    double balance;
    string accountHolder;
    public:
    void setAccountDetails(double b, string n){
        balance = b;
        accountHolder = n;
    }
    
    void getDetails(){
        cout<<"The balance in the account is :"<<balance<<endl;
        cout<<"The Account Holder name is :"<<accountHolder<<endl;
        cout<<"------------------"<<endl;
    }
    
};

int main(){
    
    BankAccount holder1;
    holder1.setAccountDetails(15000, "Mrunal Baviskar");
    holder1.getDetails();
    
    
    BankAccount holder2;
    holder2.setAccountDetails(20000, "Prachiti Parate");
    holder2.getDetails();
    
    BankAccount holder3;
    holder3.setAccountDetails(10000, "Nisha Wagh");
    holder3.getDetails();
    
    return 0;
}