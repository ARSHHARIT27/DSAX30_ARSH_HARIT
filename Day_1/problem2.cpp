#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            cout << char('A' + j);
        }
        for (int j = i - 2; j >= 0; j--) {
            cout << char('A' + j);
        }
        cout << endl;
    }
    return 0;
}
