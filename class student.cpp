#include <iostream>
#include <string>
using namespace std;

class student
{
public: 
    string name;
    int marks; 
   
    void input()
    {
        cout << "Enter name = ";
        cin >> name;
        cout << "Enter percentage = ";
        cin >> marks;          
    }
   
    void display()
    {
        cout << "name= " << name << endl;
        cout << "Percentage = " << marks << endl;
    }
};

int main()
{
    student s1;
    s1.input();
    s1.display();
    return 0;
}
