#include <iostream>
#include <vector>

using namespace std;

string reverseStringWordWise(string input) {
    vector<string> result;
    int left = 0;
    int right;
    int k = 0;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            right = i - 1;
            while (left <= right) {
                result[k] += input[left];
                left++;
            }
            k++;
            left = i + 1;  // Move the left pointer to the beginning of the next word
        }
    }

    // Handle the last word
    right = input.length() - 1;
    while (left <= right) {
        result[k] += input[left];
        left++;
    }

    string output;
    for (int i = 0; i < k; i++) {
        output += result[i];
        output += ' ';
    }
    if (k >= 0) {
        output += result[k];
    }

    return output;
}

int main() {
    string input = "Aryan is here";
    string result = reverseStringWordWise(input);
    cout << result << endl;
    return 0;
}
