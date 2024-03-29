#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;  // Not a palindrome
        }
        left++;
        right--;
    }

    return true;  // It's a palindrome
}

int main() {
    string input = "abcba";

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
