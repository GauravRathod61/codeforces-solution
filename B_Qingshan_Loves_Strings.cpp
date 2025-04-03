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
    ll n,m ;
    cin>>n>>m ;
    string s,t ;
    cin>>s>>t ;
    if(n==1ll){
        yes ;
        return ;
    }
    ll c0=0,c1=0 ;
    bool che = true ;
    rep(i,1,n){
        if(s[i]==s[i-1]){
            if(s[i]=='0') c0++ ;
            else c1++ ;
            che = false ;
        }
    }
    if(che){
        yes ;
        return ;
    }
    if(c0>0 && c1>0){
        no ;
        return ;
    }
    if(m%2==0ll){
        no  ;
        return ;
    }
    che = true ;
    rep(i,1ll,m){
        if(t[i]==t[i-1]){
            che = false ;
            break ;
        }
    }
    if(!che){
        no ;
        return ;
    }
    if((t[0]=='0' && c1>0) || (t[0]=='1' && c0>0)){
        yes ;
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