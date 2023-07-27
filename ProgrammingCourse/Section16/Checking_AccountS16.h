#pragma once

#include <iostream>
#include <string>
#include "AccountS16.h"

class Checking_AccountS16 : public AccountS16 
{
private:
    static constexpr const char* def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    Checking_AccountS16(std::string name = def_name, double balance = def_balance);
    virtual bool withdraw(double) override;
    virtual bool deposit(double) override;
    virtual void print(std::ostream& os) const override;

    virtual ~Checking_AccountS16() = default;
};
