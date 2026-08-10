#include <iostream>
using namespace std;

class Fraction 
{
public:
    int numA, denoA; 
    int numB, denoB; 

    void takeInput()
    {
        cout << "First Fraction:" << endl;
        cout << "Numerator: ";
        cin >> numA;
        cout << "Denominator: ";
        cin >> denoA;

        cout << "\nEnter Second Fraction:" << endl;
        cout << "Numerator: ";
        cin >> numB;
        cout << "Denominator: ";
        cin >> denoB;
    }

    void displayAddition() 
    {
        int resultNum = (numA * denoB) + (numB * denoA);
        int resultDeno = denoA * denoB;
        cout << "\nAddition: " << numA << "/" << denoA << " + " << numB << "/" << denoB 
             << " = " << resultNum << "/" << resultDeno << endl;
    }

    void displaySubtraction() 
    {
        int resultNum = (numA * denoB) - (numB * denoA);
        int resultDeno = denoA * denoB;
        cout << "Subtraction: " << numA << "/" << denoA << " - " << numB << "/" << denoB 
             << " = " << resultNum << "/" << resultDeno << endl;
    }
};

int main() 
{
    Fraction f;
    f.takeInput();
    f.displayAddition();
    f.displaySubtraction();

    return 0;
}
