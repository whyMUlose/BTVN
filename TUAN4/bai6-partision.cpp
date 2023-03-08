#include <iostream>

using namespace std;

void in(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void tong(int sum, int arr[], int low, int high)
{
    if (sum == 0) {
        in(arr, low);
    }
    for (int i = high; i <= sum; i++) {
        arr[low] = i;
        tong(sum - i, arr, low + 1, i);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
 tong(n, arr, 0, 1);
    return 0;
}
