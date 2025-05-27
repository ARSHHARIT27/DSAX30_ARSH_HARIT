#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    unordered_set<int> seen;
    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        int sum = 0;
        int temp = n;

        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit;
            temp /= 10;
        }
        n = sum;
    }
    if (n == 1) {
        cout << "true (Happy number)" << endl;
    } else {
        cout << "false (Not a happy number)" << endl;
    }
    return 0;
}
