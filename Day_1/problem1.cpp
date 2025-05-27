#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    int size = 2 * N - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int val = max(abs(N - 1 - i), abs(N - 1 - j)) + 1;
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
