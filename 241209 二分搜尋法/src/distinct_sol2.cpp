#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> result(arr, arr + n);
    cout << result.size() << '\n';
}