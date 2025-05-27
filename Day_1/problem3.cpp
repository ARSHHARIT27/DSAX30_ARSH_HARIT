#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
    int N;
    cout << "Enter any number from 2 to 5 (both inclusive): ";
    cin >> N;
    if (N < 2 || N > 5) {
        cout << "Invalid input. Please enter a number between 2 and 5." << endl;
        return 1;
    }
    int arr[5]; 
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }
    int count = 0;
    sort(arr, arr + N); 
    do {
        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        count++;
    } while (next_permutation(arr, arr + N));
    cout << "Total number of combinations: " << count << endl;
    return 0;
}
