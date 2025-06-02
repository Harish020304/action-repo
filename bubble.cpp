#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

// Function to generate the sub-number of N
int subNumber(int input1, int input2) {
    string n = to_string(input1);
    int k = input2;
    int closest = -1;
    int minDiff = INT_MAX;

    // Generate all possible sub-numbers
    int len = n.size();
    for (int i = 1; i < (1 << len); i++) {
        string sub = "";
        for (int j = 0; j < len; j++) {
            if (i & (1 << j)) {
                sub += n[j];
            }
        }
        // Convert sub-number to integer
        int subNum = stoi(sub);
        // Check if subNum is greater than K and closer to K
        if (subNum > k) {
            int diff = abs(subNum - k);
            if (diff < minDiff || (diff == minDiff && subNum < closest)) {
                closest = subNum;
                minDiff = diff;
            }
        }
    }
    return closest;
}

int main() {
    // Example 1
    int input1 = 123, input2 = 14;
    cout << "Output: " << subNumber(input1, input2) << endl; // Output: 23

    // Example 2
    input1 = 6, input2 = 2;
    cout << "Output: " << subNumber(input1, input2) << endl; // Output: 243

    return 0;
}