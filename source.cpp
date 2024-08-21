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
/*****************************/
void priv_pub_acc(void)
{
    Employee emp1;
    emp1.name = "Jim";
    emp1.set_salary(700);
    cout << "name: " << emp1.name << " has " << emp1.get_salary() << " salary." << endl;
    emp1.printBounes();
}
/******************************/
class Rectangle
{
    private:
    double length;
    double width;

    double area()
    {
        return (length * width);
    }

    public:
    void set_dim(double l, double w)
    {
        length = l;
        width = w;
    }
    double perimeter();
    void print_area()
    {
        cout << "The area is:" << area() << endl;
    }
};

double Rectangle::perimeter()
{
    return 2*(length * width);
}

void methods(void)
{
    Rectangle rect1;
    rect1.set_dim(4,3);
    cout << "Perimeter is:" << rect1.perimeter()<<endl;
    rect1.print_area();
}
int main()
{
    //basic_class();
    //priv_pub_acc();
    methods();
    return 0;
}