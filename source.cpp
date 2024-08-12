#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BankAccount
{
    public:
    string name;
    int balance;

    void withdraw(int x)
    {
        cout << "balance after withdraw : "<< balance - x <<endl;

    }

    void printmsg()
    {
        cout << name << " has " << balance <<" dollars" <<endl;
    }

};

void basic_class(void)
{
    BankAccount account1;
    account1.name = "parastoo";
    account1.balance = 3000;
    account1.printmsg();
    account1.withdraw(400);
}

int main()
{
    basic_class();
    return 0;
}