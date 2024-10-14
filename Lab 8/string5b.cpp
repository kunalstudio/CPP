#include <iostream>
#include <string>
using namespace std;


bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = 0, consonants = 0, digits = 0, whitespaces = 0;

    for (char ch : input) {
        if (isalpha(ch)) {
            if (isVowel(ch))
                vowels++;
            else
                consonants++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (isspace(ch)) {
            whitespaces++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Whitespaces: " << whitespaces << endl;

    return 0;
}
