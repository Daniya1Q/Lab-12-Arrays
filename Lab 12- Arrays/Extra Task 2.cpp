#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& word);
void palindrome_pairs(const string words[], int size);

int main() {
    const int max_size = 1000;
    const int word_size = 100;

    cout << "Enter the number of words: ";
    int size;
    cin >> size;

    if (size <= 0 || size > max_size) {
        cerr << "Invalid size. Exiting program." << endl;
        return 1;
    }

    string words[max_size];

    cout << "Enter the words:\n";
    for (int i = 0; i < size; ++i) {
        cin >> words[i];
    }

    palindrome_pairs(words, size);

    return 0;
}

bool isPalindrome(const string& word) {
    int start = 0;
    int end = word.length() - 1;

    while (start < end) {
        if (word[start] != word[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

void palindrome_pairs(const string words[], int size) {
    cout << "Palindrome pairs:\n";

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (isPalindrome(words[i] + words[j])) {
                cout << "(" << words[i] << ", " << words[j] << ")\n";
            }
            if (isPalindrome(words[j] + words[i]) && i != j) {
                cout << "(" << words[j] << ", " << words[i] << ")\n";
            }
        }
    }
}
