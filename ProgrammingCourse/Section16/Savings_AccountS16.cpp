#include "Savings_AccountS16.h"

Savings_AccountS16::Savings_AccountS16(std::string name, double balance, double int_rate)
    : AccountS16{ name, balance }, int_rate{ int_rate } 
{
}

// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100) 
//      and then the updated amount will be deposited
//
bool Savings_AccountS16::deposit(double amount) 
{
    amount += amount * (int_rate / 100);
    return AccountS16::deposit(amount);
}

bool Savings_AccountS16::withdraw(double amount) 
{
    return AccountS16::withdraw(amount);
}


void Savings_AccountS16::print(std::ostream& os) const 
{
    os.precision(2);
    os << std::fixed;
    os << "[Savings_Account: " << name << ": " << balance << ", " << int_rate << "]";
}