#include <iostream>

using namespace std;

int main() {
    bool i = true;
    
    while (i) {
        double num1, num2, result;
        char x;
        
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        
        cout << "Enter the operation to be done (+, -, *, /, E to end): ";
        cin >> x;
        
        switch (x) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
                
            case '-':
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;

            case '*':
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;

            case '/':
                if (num2 != 0) { // Now, the check happens only when dividing
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed!" << endl;
                }
                break;
                
            case 'E':
            case 'e':
                i = false;
                cout << "Exiting the calculator..." << endl;
                break;

            default:
                cout << "Invalid input! Please enter a valid operator." << endl;
                break;
        }
    }

    return 0;
}
