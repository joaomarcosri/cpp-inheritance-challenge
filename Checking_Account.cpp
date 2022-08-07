#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double w_fee)
    : Account{name, balance} {
}

bool Checking_Account::withdraw(double amount) {
    amount += def_w_fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Savings_Account: " << account.name << ": " << account.balance << ", $" << account.def_w_fee << "]";
    return os;
}