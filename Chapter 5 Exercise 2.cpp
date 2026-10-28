#include <iostream>

using namespace std;

int main() {
    int limit;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> limit;

    while (limit <= 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin >> limit;
    }

    for (int i = 1; i <= limit; i++) {
        sum += i;
    }

    cout << "The sum of integers from 1 to " << limit << " is: " << sum << endl;

    return 0;
}