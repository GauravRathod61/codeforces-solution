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
    ll n ;
    cin>>n ;
    // vector<vector<char>>arr(2,vector<char>(n)) ;
    string a,b ;
    cin>>a>>b ;
    string can = "" ;
    rep(i,0,n){
        if(i%2==0){
            can += b[i] ;
        }
        else can += a[i] ;
    }
    rep(i,1,n){
        if(can[i]=='<' && can[i-1]=='<'){
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
