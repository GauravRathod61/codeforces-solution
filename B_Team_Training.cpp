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
    ll n,x ;
    cin>>n>>x ;
    vll arr(n) ;
    ll an = 0ll ;
    vll othe ;
    rep(i,0,n){
        cin>>arr[i] ;
        // if(arr[i]>=x) an++ ;
        // else othe.emplace_back(arr[i]) ;
    }
    // sort(all(othe)) ;
    sort(all(arr)) ;
    ll i = n-1 ;
    ll it = 0ll; 
    while(i>=0ll){
        ll mi = 0ll ;
        // ll it =   0ll ;
        mi = arr[i] ;
        it++ ;
        if(it*mi>=x){
            an++ ;
            it=0ll ;
        }
        i-- ;
    }
    cout<<an<<endl ;
    return ;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}