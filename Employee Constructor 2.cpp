#include <iostream>
#include <string>

class Employee {
private:
    int employeeID;
    std::string employeeName;
    double basicSalary;
    double hra; // House Rent Allowance
    double da;  // Dearness Allowance

public:
    // Parameterized Constructor to initialize values
    Employee(int id, std::string name, double basic, double h, double d) {
        employeeID = id;
        employeeName = name;
        basicSalary = basic;
        hra = h;
        da = d;
        std::cout << "Constructor called: Object created for " << employeeName << ".\n";
    }

    // Method to calculate Gross Salary
    double calculateGrossSalary() {
        return basicSalary + hra + da;
    }

    // Method to display employee details
    void displayDetails() {
        std::cout << "\n--- Employee Details ---\n";
        std::cout << "Employee ID   : " << employeeID << "\n";
        std::cout << "Employee Name : " << employeeName << "\n";
        std::cout << "Basic Salary  : $" << basicSalary << "\n";
        std::cout << "HRA           : $" << hra << "\n";
        std::cout << "DA            : $" << da << "\n";
        std::cout << "Gross Salary  : $" << calculateGrossSalary() << "\n";
        std::cout << "------------------------\n\n";
    }

    // Destructor to display a message when an object is destroyed
    ~Employee() {
        std::cout << "Destructor called: Object for " << employeeName << " (ID: " << employeeID << ") has been destroyed.\n";
    }
};

int main() {
    // Creating an Employee object inside a block to demonstrate destructor execution
    {
        Employee emp1(101, "Alice Smith", 50000.0, 7500.0, 4000.0);
        
        // Displaying details and gross salary
        emp1.displayDetails();
    } // emp1 goes out of scope here, triggering the destructor

    std::cout << "\nProgram execution finished.\n";
    return 0;
}
