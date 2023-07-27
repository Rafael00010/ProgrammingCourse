#include <iostream>
#include <memory>
#include "Section16/AccountS16.h"
#include "Section16/Checking_AccountS16.h"
#include "Section16/Savings_AccountS16.h"
#include "Section16/TrustAccountS16.h"
#include "Section16/Account_UtilS16.h"

using namespace std;


void Section16Challenge()
{
    //    AccountS16 joe;
    //Checking_AccountS16 c;
    //cout << c << endl;
//   
//    Savings_AccountS16 s {"Frank", 5000, 2.6};
//    cout << s << endl;
//    s.deposit(10000);
//    cout << s << endl;
//    s.withdraw(10000);
//    cout << s << endl;


    AccountS16* ptr = new Trust_AccountS16("Leo", 10000, 2.6);
    cout << *ptr << endl;


    //    AccountS16 frank{"Frank", 5000};         // should not compile
    //    cout << frank << endl;

        Checking_AccountS16 frank {"Frank", 5000};
        cout << frank << endl;
    //    
        AccountS16 *trust = new Trust_AccountS16("James");
        cout << *trust << endl;
    //    
        AccountS16 *p1 = new Checking_AccountS16("Larry", 10000);
        AccountS16 *p2 = new Savings_AccountS16("Moe", 1000);
        AccountS16 *p3 = new Trust_AccountS16("Curly");
    //    
        std::vector<AccountS16 *> accounts {p1,p2,p3};
    //    
    //    display(accounts);
    //    deposit(accounts, 1000);
    //    withdraw(accounts, 2000);
    //    
    //    display(accounts);
    //    
        delete p1;
        delete p2;
        delete p3;
}