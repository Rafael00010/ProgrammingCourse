#include "Section16/AccountS16.h"
#include "Section16/Checking_AccountS16.h"
#include "Section16/Savings_AccountS16.h"
#include "Section16/TrustAccountS16.h"
#include "Section16/Account_UtilS16.h"

void Section18Challenge()
{
    std::unique_ptr<AccountS16> moes_account;
    std::unique_ptr<AccountS16> larrys_account;
    try {
        larrys_account = std::make_unique<Savings_AccountS16>("Larry", -2000.0);
        std::cout << *larrys_account << std::endl;
    }
    catch (const IllegalBalanceException& ex)
    {
        std::cerr << ex.what() << std::endl;
    }

    try {
        moes_account = std::make_unique<Savings_AccountS16>("Moe", 1000.0);
        std::cout << *moes_account << std::endl;
        moes_account->withdraw(500.0);
        std::cout << *moes_account << std::endl;
        moes_account->withdraw(1000.0);
        std::cout << *moes_account << std::endl;

    }
    catch (const IllegalBalanceException& ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch (const InsufficientFundsException& ex) {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
}
