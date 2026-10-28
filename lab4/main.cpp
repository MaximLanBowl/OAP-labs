#include <iostream>

using namespace std;

int main() {
    double nums[15];
    double sum = 0, avg = 0;
    int negCounter = 0, counter = 0;

    cout << "Enter numbers\n";

    for (int i = 0; i < 15; i++) {
        cin >> nums[i];
        if (nums[i] < 0) {
            sum += nums[i];
            negCounter++;
        }

        if (nums[i] >= 0 && nums[i] <= 5) {
            counter++;
        }
    }     

    if (negCounter > 0) {
        avg = sum / negCounter;
        cout << "Average of negative nums = " << avg << endl;
    } else {
        cout << "No negative nums" << endl;
    }

    cout << "Count of nums in 0...5 = " << counter << endl;


    return 0;
}