#include <iostream>
using namespace std;

int main() {
    int desiredSum;

    // Input the desired sum from the user
    cout << "Enter the desired sum of three dice: ";
    cin >> desiredSum;

    // Check for valid input range (3 to 18 inclusive)
    if (desiredSum < 3 || desiredSum > 18) {
        cout << "Invalid input. The sum must be between 3 and 18 inclusive." << endl;
        return 1; // Exit with error code
    }

    cout << "Possible outcomes for the sum of " << desiredSum << " with three dice are:" << endl;

    // Loop through all possible combinations of three dice
    for (int d1 = 1; d1 <= 6; ++d1) {
        for (int d2 = 1; d2 <= 6; ++d2) {
            for (int d3 = 1; d3 <= 6; ++d3) {
                // If the sum of current combination equals desired sum, print it
                if (d1 + d2 + d3 == desiredSum)
                    cout << "(" << d1 << ", " << d2 << ", " << d3 << ")" << endl;
            }
        }
    }

    return 0;
}
