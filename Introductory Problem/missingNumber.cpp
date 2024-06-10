#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<int> arr(n-1);
    long long int total_sum = n * (n + 1) / 2;
    long long int arr_sum = 0;

    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
        arr_sum += arr[i];
    }

    long long int missing_number = total_sum - arr_sum;
    cout << missing_number << endl;

    return 0;
}
