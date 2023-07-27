#include "AccountS16.h"

AccountS16::AccountS16(std::string name, double balance)
    : name{ name }, balance{ balance } 
{
}

bool AccountS16::deposit(double amount) 
{
    if (amount < 0)
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool AccountS16::withdraw(double amount) 
{
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    else
        return false;
}

void AccountS16::print(std::ostream& os) const 
{
    os.precision(2);
    os << std::fixed;
    os << "[Account: " << name << ": " << balance << "]";
}