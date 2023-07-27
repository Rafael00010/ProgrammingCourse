#pragma once

#include <vector>
#include "AccountS16.h"
#include "Savings_AccountS16.h"
#include "Checking_AccountS16.h"
#include "TrustAccountS16.h"

// Utility helper functions for Account class

void display(const std::vector<AccountS16>& accounts);
void deposit(std::vector<AccountS16>& accounts, double amount);
void withdraw(std::vector<AccountS16>& accounts, double amount);

// Utility helper functions for Savings Account class

void display(const std::vector<Savings_AccountS16>& accounts);
void deposit(std::vector<Savings_AccountS16>& accounts, double amount);
void withdraw(std::vector<Savings_AccountS16>& accounts, double amount);

// Utility helper functions for Checking Account class
void display(const std::vector<Checking_AccountS16>& accounts);
void deposit(std::vector<Checking_AccountS16>& accounts, double amount);
void withdraw(std::vector<Checking_AccountS16>& accounts, double amount);

// Utility helper functions for Trust Account class
void display(const std::vector<Trust_AccountS16>& accounts);
void deposit(std::vector<Trust_AccountS16>& accounts, double amount);
void withdraw(std::vector<Trust_AccountS16>& accounts, double amount);