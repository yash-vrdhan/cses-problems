#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    if (n == 1) {
        cout << "1";
    } else if (n > 1 && n < 4) {
        cout << "NO SOLUTION";
    } else {

        for (long long int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }

        for (long long int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }

    return 0;
}
