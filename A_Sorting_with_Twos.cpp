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
    rep(i,0,n) cin>>arr[i] ;
    ll m = (ll)log2((float)n) ;
    if(n==1 || n==2){
        yes ;
        return ;
    }
    ll i = 3ll,now=2 ;
    while(now<=m){
        
        repp(j,i,pow(2ll,now)-1ll){
            if(arr[j]<arr[j-1]){
                no ;
                return ;
            }
        }
        i = pow(2,now) + 1 ;
        now++ ;
    }
    i = pow(2,m) + 1  ;
    repp(j,i,n){
        if(arr[j]<arr[j-1]){
            no ;
            return ;
        }
    }

    yes ;


    
    return ;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}