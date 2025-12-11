#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define all(v) v.begin(),v.end()

void fun(){
    int n;
    cin >> n;
    vi v(n+1);
    for(int i=1;i<=n;i++) cin >> v[i];

    vi u = v;
    sort(u.begin()+1, u.end());

    vi pre_v(n+1,0), pre_u(n+1,0);
    for(int i=1;i<=n;i++){
        pre_v[i] = pre_v[i-1] + v[i];
        pre_u[i] = pre_u[i-1] + u[i];
    }

    int m;
    cin >> m;
    while(m--){
        int type, l, r;
        cin >> type >> l >> r;
        if(type==1){
        cout << pre_v[r]-pre_v[l-1] << "\n";
    }
        else
         cout << pre_u[r]-pre_u[l-1] << "\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) fun();
    return 0;
}
