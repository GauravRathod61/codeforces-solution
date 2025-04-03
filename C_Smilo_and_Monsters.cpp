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
    sort(all(arr)) ;
    if(n==1){
        if(arr[0]==1) cout<<1ll<<endl ; 
        else cout<<(arr[0]+1ll)/2ll+1ll<<endl ;
        return ;
    }
    ll add = 0ll ;
    ll l = n - 1ll,f=0ll ;
    ll an = 0ll ;
    while(f<=l){
        ll te = add + arr[f] ;
        if(f==l){
            // add += arr[l] ;
            // an += (add+1ll)/2ll  ;
            // if(add!=1ll) an++ ;
            
            ll te1 = add + arr[l] ;
            if(te1==1ll){
                an++ ;
                break; 
            }
            an += arr[l] - te1/2 + 1ll ;
            // cout<<"CHECK"<<add<<" "<<an<<" "<<endl ;
            break ;
        }
        if(te<arr[l]){
            add += arr[f] ;
            an += arr[f] ;
            // cout<<"CHECK"<<add<<" "<<an<<" "<<endl ;
            f++ ;
            continue;
        }
        if(te==arr[l]){
            
            add = 0ll ;
            an += arr[f] + 1ll ;
            // cout<<"CHECK"<<add<<" "<<an<<" "<<endl ;
            f++ ;
            l-- ;
            continue;
        }
        if(te>arr[l]){
            // an += arr[l] - add + 1ll ;
            // add = te - arr[l] ;
            // l-- ;
            // continue;
            an += arr[l] - add + 1ll ;
            arr[f] = arr[f] - (arr[l]-add) ;
            add = 0ll ;
            l-- ;
            // cout<<"CHECK"<<add<<" "<<an<<" "<<endl ;
            continue;
        }
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