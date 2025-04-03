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
    string s ;
    cin>>s ;
    ll n = s.length() ;
    // string an = "" ;
    rep(i,0ll,n){
        ll che = min(i+8,n-1ll),val=0ll,ind=0ll ;
        repp(j,i,che){
            ll te = (int)s[j] - 48ll ;
            if((te-(j-i))>val){
                val = te - (j-i) ;
                ind = j ;
            }
        }
        rev(j,ind,i+1){
            s[j] = s[j-1] ;
        }
        s[i] = (char)(val+48ll) ;
    }
    cout<<s<<endl ;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
