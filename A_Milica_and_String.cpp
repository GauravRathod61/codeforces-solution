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
    int n,k ;
    cin>>n>>k ;
    string s ;
    cin>>s ;
    int ca=0,cb=0 ;
    rep(i,0,n){
        if(s[i]=='A')ca++ ;
        else cb++ ;
    }
    if(cb==k){
        o(0) ;
        return ;
    }
    if(cb>k){
        int te = cb - k ;
        int ind  = 0 ;
        rep(i,0,n){
            if(s[i]=='B') te-- ;
            if(te==0){
                ind =  i + 1 ;
                break;
            }
        }
        cout<<1<<endl ;
        cout<<ind<<" "<<'A'<<endl ;
    }
    if(cb<k){
        int te = k - cb ;
        int ind  = 0 ;
        rep(i,0,n){
            if(s[i]=='A') te-- ;
            if(te==0){
                ind =  i + 1 ;
                break;
            }
        }
        cout<<1<<endl ;
        cout<<ind<<" "<<'B'<<endl ;
    }
    return ;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}