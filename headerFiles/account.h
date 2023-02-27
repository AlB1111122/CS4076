#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;

class Account {
    public:

        Account(string &nameIn, string &passwordIn);

        void setName(string &nameIn);

        [[nodiscard]] string getName() const;

        void setPassword(string &passwordIn);

        [[nodiscard]] string getPassword() const;

    private:
        string name;
        string password;
};
#endif // ACCOUNT_H

