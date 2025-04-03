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
    ll n; 
    cin>>n ;
    vll arr(n) ;
    rep(i,0,n) cin>>arr[i] ;
    ll c0=3,c1=1,c3=1,c2=2,c5=1 ;
    ll an = 0 ;
    rep(i,0,n) {
        if(arr[i]==0) c0-- ;
        if(arr[i]==1) c1-- ;
        if(arr[i]==3) c3-- ;
        if(arr[i]==2) c2-- ;
        if(arr[i]==5) c5-- ;

        if(c0<=0 && c1<=0 && c3<=0 && c2<=0 && c5<=0){
            an = i + 1 ;
            break ;
        }
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