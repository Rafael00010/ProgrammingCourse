#include "Checking_AccountS16.h"

Checking_AccountS16::Checking_AccountS16(std::string name, double balance)
    : AccountS16{ name, balance } 
{
}

bool Checking_AccountS16::withdraw(double amount) 
{
    amount += per_check_fee;
    return AccountS16::withdraw(amount);
}

bool Checking_AccountS16::deposit(double amount) 
{
    return AccountS16::deposit(amount);
}

void Checking_AccountS16::print(std::ostream& os) const 
{
    os.precision(2);
    os << std::fixed;
    os << "[Checking_Account: " << name << ": " << balance << "]";
}