#include "TrustAccountS16.h"

Trust_AccountS16::Trust_AccountS16(std::string name, double balance, double int_rate)
    : Savings_AccountS16{ name, balance, int_rate }, num_withdrawals{ 0 } {

}

// Deposit additional $50 bonus when amount >= $5000
bool Trust_AccountS16::deposit(double amount) {
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    return Savings_AccountS16::deposit(amount);
}

// Only allowed 3 withdrawals, each can be up to a maximum of 20% of the account's value
bool Trust_AccountS16::withdraw(double amount) {
    if (num_withdrawals >= max_withdrawals || (amount > balance * max_withdraw_percent))
        return false;
    else {
        ++num_withdrawals;
        return Savings_AccountS16::withdraw(amount);
    }
}

void Trust_AccountS16::print(std::ostream& os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Trust Account: " << name << ": " << balance << ", " << int_rate
        << "%, withdrawals: " << num_withdrawals << "]";
}