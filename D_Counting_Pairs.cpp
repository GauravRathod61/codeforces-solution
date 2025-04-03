#include <bits/stdc++.h>
using namespace std;
#define Code_By_GAURAV ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long ll;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define o(x) cout<<x<<endl

#define rep(i, a, b) for (ll i = (a); i < (b); i++)
#define repp(i, a, b) for (ll i = (a); i <= (b); i++)
#define rev(i, a, b) for (ll i = (a); i >= (b); i--)
#define trav(a, x) for (auto &a : x)

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sorta(x) sort(all(x)) ;
#define sortd(x) sort(rall(x)) ;

#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pii>
#define vpl vector<pll>

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    vll arr(n);
    rep(i, 0, n) cin >> arr[i];
    sort(all(arr));

    ll su = accumulate(all(arr), 0ll);
    ll an = 0ll;

    rep(i,0,n){
        ll l = lower_bound(all(arr),su-y-arr[i]) - arr.begin() ;
        ll r = upper_bound(all(arr),su-x-arr[i]) - arr.begin() ;
        an += max(0ll,r-l) ;
        if((i>=l) && i<r) an-- ;
    }

    cout << an/2 << endl;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
