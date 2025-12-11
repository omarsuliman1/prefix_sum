#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()

template<typename T>
ostream& operator<<(ostream& os, vector<T>& v) {
    for (auto& i : v) os << i << ' ';
    return os;
}

template<typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& i : v) is >> i;
    return is;
}

void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

const int MOD = 1000000007;

void fun() {
    int n, q;
    cin >> n >> q;

    vi a(n+1), pref(n+1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l-1] << "\n";
    }
}

int32_t main() {
    FastIO();
    int t = 1;
    while (t--) fun();
    return 0;
}
