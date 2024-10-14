#include <iostream>
#include <cstring>
using namespace std;


bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);

    int vowels = 0, consonants = 0, digits = 0, whitespaces = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            if (isVowel(input[i]))
                vowels++;
            else
                consonants++;
        } else if (isdigit(input[i])) {
            digits++;
        } else if (isspace(input[i])) {
            whitespaces++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Whitespaces: " << whitespaces << endl;

    return 0;
}
