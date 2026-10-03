#include <iostream>
#include <vector>
#include <string>
using namespace std;

string numberToWord(int num) {

    vector<string> ones = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    vector<string> tens = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };

    if(num < 20) {
        return ones[num];
    }

    if(num < 100) {
        return tens[num / 10] + " " + ones[num % 10];
    }

    return "hundred";
}


string solve(vector<int>& arr) {

    int d = 0;
    int n = arr.size();

    for(int i : arr) {

        string path = numberToWord(i);

        for(char ch : path) {

            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u') {

                d++;
            }
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == d) {
                count++;
            }
        }
    }
    vector<string> answer = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
        "twenty"
    };

    if(count > 100) {
        return "greater 100";
    }

    return answer[count];
}


int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string answer = solve(arr);

    cout << answer << endl;

    return 0;
}
