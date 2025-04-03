#include <bits/stdc++.h>
using namespace std;
#define Code_By_GAURAV ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long ll;
typedef unsigned long long ull;

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
    ll n,q ;
    cin>>n>>q ;
    vll arr(n),xrr(q) ;
    rep(i,0ll,n) cin>>arr[i] ;
    rep(i,0ll,q) cin>>xrr[i] ;
    vll actu ;
    ll now = 0ll ;
    rep(i,0,q){
        if(i==0){
            now = xrr[i] ;
            actu.emplace_back(xrr[i]) ;
            continue;
        }
        if(xrr[i]<now){
            actu.emplace_back(xrr[i]) ;
            now = xrr[i] ;
        }
    }
    for(auto it:actu){
        ll te = (1<<it) ;
        ll te1 = (1<<(it-1)) ;
        rep(i,0ll,n){
            if(arr[i]%te==0ll) arr[i] += te1 ;
        }
    }

    rep(i,0,n) cout<<arr[i]<<" " ;
    cout<<endl ;



    return ;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}