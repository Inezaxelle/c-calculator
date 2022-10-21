#include <iostream>
using namespace std;

int main()
{

calculate:
    int n, a, b;
    double output;
    char choice;
    cout << "1 for addition" << endl
         << "2 for subtraction" << endl
         << "3 for multiply" << endl
         << "4 for divide, and" << endl
         << "5 for modulus" << endl;
    cout << "Enter your operator choice: ";
    cin >> n;

    cout << "Enter your two numbers: ";
    cin >> a;
    cin >> b;

    switch (n)
    {
    case 1:
        output = a + b;
        break;

    case 2:
        output = a - b;
        break;
    case 3:
        output = a * b;
        break;

    case 4:
        output = a / b;
        break;

    case 5:
        output = a % b;
        break;

    default:
        cout << "The operator is not available";
        break;
    }

    cout << "Result: " << output << endl;

    cout << "continue? ";
    cin >> choice;

    if (choice == 'y')
    {
        goto calculate;
    }
    else
    {
        cout << "---------------" << endl
             << "Thanks for using the program" << endl;
        return 0;
    }
}