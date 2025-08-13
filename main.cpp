#include <iostream>
#include <iomanip>
double checkBalance(double balance);
double depositMoney(double balance);
double withdrawMoney(double balance);

int main() {
    int trans;
    double balance = 0;
    
    do{
    std::cout << "-------------------------\n";
    std::cout << "Welcome to Banking System\n";
    std::cout << "-------------------------\n";
    std::cout << "1. Check Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    std::cout << "-------------------------\n";
    std::cout << "Choose a transaction: ";
    std::cin>>trans;
    
    
    switch (trans){
        case 1:
        checkBalance(balance);
        break;
        case 2:
        balance = depositMoney(balance);
        break;
        case 3:
        balance = withdrawMoney(balance);
        break;
        case 4:
        std::cout << "-------------------------\n";
        std::cout<<"Thank you for Visiting!";
        break;
        default:
        std::cout<<"[Error] Please try again!\n";
        break;
    } 
    } while (trans !=4);
    
    return 0;
}

double checkBalance(double balance){
    std::cout << "-------------------------\n";
    std::cout << "-------- Balance --------\n";
    std::cout << "Your balance is: ₱" << std::setprecision(2) << std::fixed << balance << std::endl;
    return 0;
}

double depositMoney(double balance){
    double deposit;
    std::cout << "-------------------------\n";
    std::cout << "-------- Deposit --------\n";
    std::cout << "Your current balance is: ₱" << std::setprecision(2) << std::fixed << balance;
    std::cout<<"\nAmount to deposit: ₱";
    std::cin>>deposit;
    
    if (deposit < 0){
        std::cout<<"[Error] Please enter valid amount!\n";
    } else {
        balance += deposit;
        std::cout<<"You successfully deposited your money!\n";
    }
    return balance;
}

double withdrawMoney(double balance){
    double withdraw;
    std::cout << "-------------------------\n";
    std::cout << "-------- Withdraw -------\n";
    std::cout << "Your current balance is: ₱" << std::setprecision(2) << std::fixed << balance;
    std::cout<<"\nAmount to withdraw: ₱";
    std::cin>>withdraw;
    
    if (withdraw > balance){
        std::cout<<"[Error] Insufficient Fund!\n";
    } else if (withdraw < 0){
        std::cout<<"[Error] Please enter valid amount!\n";
    } else {
        balance -= withdraw;
        std::cout<<"You successfully withdrawn your money!\n";
    }
    return balance;
}