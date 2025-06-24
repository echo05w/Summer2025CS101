#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> vec(n, 0);

    for (int i = 0; i < vec.size(); i++) {
        cin >> vec[i];
    }

    for (int i = vec.size() - 1; i >= 0; i--) {
        if (vec[i] <= 0) {
            vec.erase(vec.begin() + i);
        }
    }

    cout << "Filtered vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
