int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> s(n + 1);
    vector<long long> arr(n + 1);
    arr[0] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        arr[i] = arr[i-1] + x;
    }
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << arr[r] - arr[l-1] << '\n';
    }
}