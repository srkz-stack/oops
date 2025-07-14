#include<iostream>

class BankAccount{
private:
  static inline int AccountNumberCount = 1000;
  std::string AccountHolderName;
  double Balance;
  const int AccountNumber;
public:
  BankAccount(std::string AccountHolderName){
    this->AccountHolderName = AccountHolderName;
    this->Balance = 0.0;
    this->AccountNumber = BankAccount::AccountNumberCount;
    BankAccount::AccountNumberCount++;
  }

  void deposit(double amount){
    if(this->Balance >= 0.0){
      this->Balance += amount;
    }
  }

  void withdraw(double amount){
    if(this->Balance >= amount){
      this->Balance -=amount;
    }
    else{
      //logs or shows that account doesn't have enough fund
      std::cout << "Not Enough Fund to carry out the Transaction" << '\n';
    }
  }

  double getBalance() const{
    return this->Balance;
  }

  void displayAccountDetails() const{
    std::cout << "Account Details: " << '\n';
    std::cout << "Account Holder Name: " << this->AccountHolderName << '\n';
    std::cout << "Account Number: " << this->AccountNumber << '\n';
    std::cout << "Balance: " << this->Balance << '\n';
  }

};

int main(){
  //fill up the main file code
  return 0; //not required for main function in modern c++ but good practice
}
