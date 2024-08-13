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
/*********************************/
class Employee
{
    public:
    string name;
    void set_salary(double x)
    {
        salary = x;
    }
    double get_salary()
    {
        return salary;
    }

    void printBounes()
    {
        cout << "nmae: "<< name << " has "<< bounes() << " bounes." << endl;
    }

    private:
    double salary;
    double bounes()
    {
        return salary * 0.1;
    }
};

void priv_pub_acc(void)
{
    Employee emp1;
    emp1.name = "Jim";
    emp1.set_salary(700);
    cout << "name: " << emp1.name << " has " << emp1.get_salary() << " salary." << endl;
    emp1.printBounes();
}
/*************************************/
int main()
{
    //basic_class();
    priv_pub_acc();
    return 0;
}