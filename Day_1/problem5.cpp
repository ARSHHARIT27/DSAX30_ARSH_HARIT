#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int p, q;
    cout << "Enter p (start): ";
    cin >> p;
    cout << "Enter q (end): ";
    cin >> q;
    cout << "The Kaprekar Numbers are:\n";
    int count = 0;
    for (int i = p; i <= q; i++) {
        long long sq = (long long)i * i;
        string str_sq = to_string(sq);
        int len = str_sq.length();
        // Spliting the square into two parts
        string left_str = str_sq.substr(0, len / 2);
        string right_str = str_sq.substr(len / 2);
        // Convert parts to integers (handle empty left part)
        int left = (left_str == "") ? 0 : stoi(left_str);
        int right = stoi(right_str);
        if (left + right == i) {
            cout << i << ", ";
            count++;
        }
    }
    if (count == 0) {
        cout << "No Kaprekar numbers found in the given range\n";
    } else {
        cout << "\nFrequency of Kaprekar numbers is " << count << endl;
    }

    return 0;
}
