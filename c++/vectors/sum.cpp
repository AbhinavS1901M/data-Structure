#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int count;

    cout << "How many numbers do you want to enter? ";
    cin >> count;

    // Input loop
    for (int i = 0; i < count; ++i) {
        int num;
        cout << "Enter number " << (i + 1) << ": ";
        cin >> num;
        numbers.push_back(num);
    }

    // Sum calculation using loop
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
    }

    cout << "The sum of the numbers is: " << sum << std::endl;

    return 0;
}
