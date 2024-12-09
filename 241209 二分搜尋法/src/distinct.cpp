#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool bs(vector<int> arr, int target) {
    int left, mid, right;
    left = 0;
    right = arr.size();

    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == target) return true;
        if (arr[mid] < target) {
            left = mid + 1;
        } else if (arr[mid] > target) {
            right = mid - 1;
         }
    }
    return false;
}

int main() {
    vector<int> arr = {2, 2, 3, 3, 2};
    sort(arr.begin(), arr.end());

    int result = 0;
    int c = -1;

    for (auto i : arr) {
        if (i != c) {
            c = i;
            if (bs(arr, i + 1)) result++;
        }
    }
    
    cout << result + 1 << '\n';
}
