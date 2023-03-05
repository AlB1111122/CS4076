#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <cstring>

class Account {
    public:
        Account(char* nameIn = "name", char* passwordIn = "password");
        void setName(char* nameIn);
        [[nodiscard]]const char* getName() const;
        void setPassword(char* passwordIn);
        [[nodiscard]]const char* getPassword() const;
        [[nodiscard]]int getAccountNo() const;
    private:
        char name[30];
        char password[30];
        int accountNo;
        int g_noAccounts;
};
#endif // ACCOUNT_H

