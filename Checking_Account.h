#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr double def_w_fee = 1.5; 
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
public:
    bool withdraw(double amount);
    Checking_Account(std::string name = def_name, double balance = def_balance, double w_fee = def_w_fee );
};

#endif // _CHECKING_ACCOUNT_H_
