#include <iostream>
#include <string>
using namespace std;

string digitToWord(int digit) {
    switch (digit) {
        case 0: return "zero";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "";
    }
}

string numberToWordsHelper(int num) {
    if (num < 10)
        return digitToWord(num);
    return numberToWordsHelper(num / 10) + " " + digitToWord(num % 10);
}

string numberToWords(int num) {
    if (num == 0)
        return digitToWord(0);
    if (num < 0)
        return "minus " + numberToWordsHelper(-num);
    return numberToWordsHelper(num);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << numberToWords(num) << endl;
    return 0;
}
