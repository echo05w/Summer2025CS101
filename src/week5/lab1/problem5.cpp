#include <iostream>
#include <string>
using namespace std;

int count(const string& s, char a) {
    int occurrences = 0;
    for (char c : s) {
        if (c == a) {
            occurrences++;
        }
    }
    return occurrences;
}

int main() {
    char target;
    string line;

    cout << "Input: ";
    cin >> target;
    cin.ignore(); // to skip newline after character input

    cout << "Enter a string: ";
    getline(cin, line);

    int result = count(line, target);

    cout << "Output: " << result << endl;

    return 0;
}
