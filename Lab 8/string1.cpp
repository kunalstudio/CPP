#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    int count = 0;
    cout << "Enter a line of text: ";
    getline(cin, s1);
    cout << "Number of empty spaces found is ";

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == ' ') {
            count++;
        }
    }
    cout << count;

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == ' ' && s1[i + 1] != ' ') {
            s1.insert(i + 1, " ");
            i++;
        }
    }

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == ' ' && s1[i + 1] == ' ') {
            int j = i + 1;
            while (s1[j] == ' ') {
                s1.erase(j, 1);
            }
            i = j + 1;
        }
    }

    cout << "\nModified text: " << s1;
    return 0;
}
