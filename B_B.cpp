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
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vi a(n);
        cin >> a;
        vi pref(n+1, 0);
        for(int i = 1; i <= n; i++) pref[i] = pref[i-1] + a[i-1];
        int total = pref[n];
        while(q--){
            int l, r, k;
            cin >> l >> r >> k;
            int new_sum = total - (pref[r] - pref[l-1]) + (r-l+1)*k;
            if(new_sum % 2) 
            {
                cout << "YES\n";
            }
            else 
            cout << "NO\n";
        }
    }
}

int32_t main() {
    FastIO();
    int t = 1;
    while(t--) fun();
    return 0;
}