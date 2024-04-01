#include <iostream>

using namespace std;

int main() {
    int count = 1;
    // int base = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (count <= 9) cout << ' ';
            // cout << count << ' ';
            // count += base;
            cout << i * j << ' ';
        }
        // base++;
        // count = base;
        cout << endl;
    }
    return 0;
}