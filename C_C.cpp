#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define all(v) v.begin(),v.end()

template<typename T>
ostream& operator<<(ostream& os, vector<T>& v){ for(auto &i:v) os<<i<<' '; return os;}
template<typename T>
istream& operator>>(istream& is, vector<T>& v){ for(auto &i:v) is>>i; return is;}

void FastIO(){ ios_base::sync_with_stdio(false); cin.tie(nullptr); }

void fun(){
    int n, q;
    cin >> n >> q;
    vi a(n+1);  
    for(int i = 1; i <= n; i++) cin >> a[i];

    vi pref1(n+1,0), pref2(n+1,0), pref3(n+1,0);
    for(int i=1;i<=n;i++){
        pref1[i] = pref1[i-1] + (a[i]==1 ? 1 : 0);
        pref2[i] = pref2[i-1] + (a[i]==2 ? 1 : 0);
        pref3[i] = pref3[i-1] + (a[i]==3 ? 1 : 0);
    }

    for(int i=0;i<q;i++){
        int l,r;
        cin >> l >> r;
        if(l<1) l=1;
        if(r>n) r=n;
        cout << pref1[r]-pref1[l-1] << ' '
             << pref2[r]-pref2[l-1] << ' '
             << pref3[r]-pref3[l-1] << '\n';
    }
}

int32_t main(){
    FastIO();
    int t=1;
    while(t--) fun();
    return 0;
}
