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
    ll n ;
    cin>>n ;
    vll arr(n);
    rep(i,0,n) cin>>arr[i] ;
    map<ll,ll>mpp ;
    rep(i,0,n) mpp[arr[i]]++ ;
    if(mpp.size()==1ll){
        yes ;
        return ;
    }
    if(mpp.size()==2){
        // ll c1,c2 ;
        auto it = mpp.begin() ;
        auto it1 = mpp.rbegin() ;
        ll c1=it->second,c2=it1->second ;
        if(n%2==0ll && c1==c2) yes ;
        else if(n%2!=0ll && abs(c1-c2)==1ll) yes ;
        else no ;
        return ;
    }
    no ;
    return ;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}