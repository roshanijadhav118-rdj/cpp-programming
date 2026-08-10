#include<iostream>
using namespace std;

class Employee
{
private
 int empID;
 string name;
 float salary;
  public:
  void accept()
  {
   cout << "Enter ID: , Name, Salary ";
   cin >> empID >> name >> salary;
   }
   
   void display()
   {
    cout<<"\nId: " << id;
    cout<<"\nName:"<< name;
    cout<<"\nSalary:" <<salary;
    }
    
    };
    int main()
    {
     Employee e;
     e.accept();
     e.display();
     return 0;
     }
     
