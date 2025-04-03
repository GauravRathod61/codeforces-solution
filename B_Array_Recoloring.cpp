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
    ll n,k;
    cin>>n>>k ;
    vll arr(n) ;
    rep(i,0,n) cin>>arr[i] ;
    ll mab = -1 ;
    repp(i,1,n-2) mab = max(mab,arr[i]) ;
    ll c1=arr[0],c2=arr[n-1] ;
    sort(rall(arr)) ;
    ll an = 0ll ;
    rep(i,0,k+1) an += arr[i];
    if(n==2){
        cout<<c1+c2<<endl ;
        return ;
    }
    if(k==1){
        ll m1 = c1 + c2 ;
        ll m2 = mab + c1 ;
        ll m3 = mab + c2 ;
        ll m4 = max(m1,m2) ;
        cout<<max(m4,m3)<<endl ;
        return ;
    }
    cout<<an<<endl; 

    


    return ;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
