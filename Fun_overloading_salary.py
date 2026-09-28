#include <iostream>
using namespace std;

class Employee
{
public:

    float calculateSalary(float basic)
    {
        return basic;
    }

    float calculateSalary(float basic, float hra)
    {
        return basic + hra;
    }

    float calculateSalary(float basic, float hra, float da)
    {
        return basic + hra + da;
    }
};

int main()
{
    Employee e;

    float basic, hra, da;

    cout << "Enter basic salary: ";
    cin >> basic;

    cout << "Enter HRA: ";
    cin >> hra;

    cout << "Enter DA: ";
    cin >> da;

    cout << "Salary using Basic Salary only: "
         << e.calculateSalary(basic) << endl;

    cout << "Salary using Basic Salary + HRA: "
         << e.calculateSalary(basic, hra) << endl;

    cout << "Salary using Basic Salary + HRA + DA: "
         << e.calculateSalary(basic, hra, da) << endl;

    return 0;
}
