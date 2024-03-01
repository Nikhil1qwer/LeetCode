#include <iostream>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0;
        int zeros = 0;
        for(char ch : s) {
            if(ch == '1') {
                ones++;
            } else {
                zeros++;
            }
        }
        string maxOdd = string(ones - 1, '1') + string(zeros, '0') + '1';
        return maxOdd;
    }
};

int main() {
    Solution solution;
    string s = "1101";
    string max_odd_binary = solution.maximumOddBinaryNumber(s);
    cout << "Maximum odd binary number: " << max_odd_binary << endl;
    return 0;
}
