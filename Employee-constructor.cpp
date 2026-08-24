#include<iostream>
#include<string>

using namespace std;

class EMPLOYEE {
     private:
          int id;
          string name;
          double salary;
     
     public :
     EMPLOYEE(){
          id=0;
          name="unknown";
          salary=0;
      }    
     EMPLOYEE(int empId, string empName, double empSalary)     
          {
          id=empId;
          name=empName;
          salary=empSalary;
          }
    EMPLOYEE(const EMPLOYEE &emp){
    id=emp.id;
    name=emp.name;
    salary=emp.salary;
    }
    
    void display() const {
        cout << "Employee ID: " << id << endl;
        cout << "Name        : " << name << endl;
        cout << "Salary      : $" << salary << endl;
        cout << "-------------------------" << endl;
    }
};

int main(){
EMPLOYEE E1;
  E1.display();
  EMPLOYEE E2(442007,"Virat",500000);
  E2.display();
  EMPLOYEE E3(E2);
  E3.display();
  return 0;
}
