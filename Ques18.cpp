#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string id) {
    int left = 0;
    int right = id.length() - 1;

    while (left < right) {
        if (id[left] != id[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string id;
    cout << "Enter ID: ";
    cin >> id;

    if (isPalindrome(id)) {
        cout << "The ID is a Palindrome." << endl;
    } else {
        cout << "The ID is NOT a Palindrome." << endl;
    }

    return 0;
}