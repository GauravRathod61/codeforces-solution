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
    vll even,odd ;
    rep(i,0,n){
        cin>>arr[i] ;
        if(arr[i]%2==0ll) even.emplace_back(arr[i]) ;
        else odd.emplace_back(arr[i]) ;
    }
    sort(all(arr)) ;
    sort(all(even)) ;
    sort(all(odd)) ;
    if(even.size()==n || odd.size()==n){
        cout<<arr[n-1]<<endl ;
        return ;
    }
    ll an = accumulate(all(even),0ll) ;
    ll an1 = accumulate(all(odd),0ll) ;
    
        cout<<an1-odd.size()+1ll+an<<endl ;
    
    // cout<<max(,)<<endl ;
    

    return ;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}