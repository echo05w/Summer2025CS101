//
// Created by HASAN SOLIYEV on 23/06/25.
//
#include <iostream>
#include <vector>
using namespace std;
// int main() {
//     string name;
//     cout<<"Enter a name: ";
//     cin >> name;
//  vector<string> vec(3, name);
//     for (int i=0; i<vec.size(); i++) {
//         cout<<vec[i]<<endl;
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter a n: "<< endl;
    cin >> n;
    cout<<"Enter numbers: "<< endl;
    vector<int> vec(n);

    cout << "Vector contents:\n";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int min = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        min = min > vec[i] ? vec[i] : min;
    }
    cout << "Min: " << min << endl;

    int max = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        max = max < vec[i] ? vec[i] : max;
    }
    cout << "Max: " << max << endl;

    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    float avg = static_cast<float>(sum) / vec.size();
    cout << "Average: " << avg << endl;

    return 0;
}

