#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int minDist = min(min(i, j), min(size - 1 - i, size - 1 - j));
            cout << n - minDist << " ";
        }
        cout << endl;
    }

    return 0;
}
