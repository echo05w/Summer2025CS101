//
// Created by HASAN SOLIYEV on 26/06/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int input;

    while (true) {
        cin >> input;
        if (input == 0) break;
        nums.push_back(input);
    }

    if (!nums.empty()) {
        cout << "Front: " << nums.front() << endl;
        cout << "Back: " << nums.back() << endl;
    } else {
        return 0;
    }

    for (auto it = nums.begin(); it != nums.end(); ) {
        if (*it < 10)
            it = nums.erase(it);
        else
            ++it;
    }

    if (nums.size() >= 1)
        nums.insert(nums.begin() + 1, 33);
    else
        nums.push_back(33);

    if (nums.size() >= 2)
        nums.insert(nums.end() - 1, 55);
    else
        nums.push_back(55);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
