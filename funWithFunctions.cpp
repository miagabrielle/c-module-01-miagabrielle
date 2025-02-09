#include <iostream>
using namespace std;

// Function to get an integer from the user
int getAnIntFromTheUser() {
    int num;
    cout << "Please enter an integer: ";
    cin >> num;
    return num;
}

// Function to compare two integers
void compareTwoInts(int num1, int num2) {
    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    } else if (num1 < num2) {
        cout << num1 << " is less than " << num2 << endl;
    } else {
        cout << num1 << " and " << num2 << " are equal." << endl;
    }
}

// Function to sum two integers
int sumTwoInts(int num1, int num2) {
    return num1 + num2;
}

int main() {
    // Step 1: Get two integers from the user
    int firstNum = getAnIntFromTheUser();
    int secondNum = getAnIntFromTheUser();

    // Step 2: Compare the two integers
    compareTwoInts(firstNum, secondNum);

    // Step 3: Sum the two integers
    int sum = sumTwoInts(firstNum, secondNum);
    cout << "The sum of " << firstNum << " and " << secondNum << " is: " << sum << endl;

    return 0;
}
