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
    vll arr(n) ;
    rep(i,0ll,n)  cin>>arr[i] ;
    if(n==1ll){
        o(0) ;
        return ;
    }
    int now = -1,ind=0ll ;
    rev(i,n-1,1ll){
        if(arr[i]<arr[i-1]){
            now = arr[i] ;
            ind = i ;
            break ;
        }
    }
    // cout<<ind<<endl ;
    if(now==-1){
        cout<<0<<endl ;
        return ;
    }

    ll an = 0ll ;
    now = arr[n-1] ;
    rev(i,n-2,0ll){
        if(arr[i]<now){
            now = arr[i] ;
            continue;
        }
        ll te = (arr[i]+now-1)/now ;
        an += te -1 ;
        now = arr[i]/te ;
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