#include<iostream>
using namespace std;

class Bank{
  string name;
  int balance;

  public:

  Bank(string name,int balance){
    this->name=name;
    this->balance=balance;
  }
  
  void deposit(int amt){
    display();
    balance+=amt;
    cout<<"credited amount : "<<amt<<endl;
    display();
  }
  void withdraw(int amt){
    display();
    balance-=amt;
    cout<<"debited amount : "<<amt<<endl;
    display();
  }
  void display(){
    cout<<"customer name : "<<name<<"  balance : "<<balance<<endl;
  }
};
int main(){
  Bank b1("anshul",23000);
  b1.deposit(2500);
  b1.withdraw(1200);

}
