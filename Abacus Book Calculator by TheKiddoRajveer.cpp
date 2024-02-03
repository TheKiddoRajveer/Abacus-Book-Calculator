#include <iostream>
#include <cmath>

using namespace std;

int main() {
    constexpr int maxOperations = 10;
    const string creatorName = "TheKiddoRajveer";

    for (int i = 0; i < maxOperations; ++i) {
        cout << "\nWelcome to " << creatorName << "'s Abacus Book Calculator!" << endl;
        cout << "Choose an operation:\n"
                "1. Calculate Cube\n"
                "2. Calculate Square\n"
                "3. Perform Addition\n"
                "4. Perform Multiplication\n"
                "5. Perform Division\n"
                "Any other number: Exit\n";

        int operation;
        cin >> operation;

        switch (operation) {
            case 1: {
                int number;
                cout << "Enter a number to cube: ";
                cin >> number;
                cout << number << " cubed is: " << pow(number, 3) << endl;
                break;
            }
            case 2: {
                int number;
                cout << "Enter a number to square: ";
                cin >> number;
                cout << number << " squared is: " << pow(number, 2) << endl;
                break;
            }
            case 3: {
                float sum = 0;
                cout << "Enter 12 numbers to add (separated by spaces): ";
                for (int j = 0; j < 12; ++j) {
                    float num;
                    cin >> num;
                    sum += num;
                }
                cout << "Sum of the 12 numbers is: " << sum << endl;
                break;
            }
            case 4: {
                cout << "Enter 10 pairs of numbers to multiply (separated by spaces): ";
                for (int j = 0; j < 10; ++j) {
                    float multia, multib;
                    cin >> multia >> multib;
                    cout << "Output = " << multia * multib << endl;
                }
                break;
            }
            case 5: {
                float numbers[20];
                int counter = 0;
                cout << "Enter 10 pairs of numbers to divide (separated by spaces): ";
                while (counter < 20 && cin >> numbers[counter]) {
                    counter++;
                }

                if (counter % 2 != 0) {
                    cout << "Error: Please enter an even number of values (10 pairs).\n";
                    continue;
                }

                for (int i = 0; i < counter; i += 2) {
                    if (numbers[i + 1] == 0) {
                        cout << "Error: Division by zero at pair " << (i / 2) + 1 << endl;
                    } else {
                        cout << "Output for pair " << (i / 2) + 1 << ": " << numbers[i] / numbers[i + 1] << endl;
                    }
                }
                break;
            }
            default:
                cout << "Exiting the program. Thank you for using " << creatorName << "'s Abacus Book Calculator!" << endl;
                return 0;
        }
    }

    return 0;
}
