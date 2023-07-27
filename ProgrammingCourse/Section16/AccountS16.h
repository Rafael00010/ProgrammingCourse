#pragma once

#include <iostream>
#include <string>
#include "I_Printable.h"

class AccountS16 : public I_Printable 
{
private:
    static constexpr const char* def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    AccountS16(std::string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual void print(std::ostream& os) const override;
    virtual ~AccountS16() = default;
};