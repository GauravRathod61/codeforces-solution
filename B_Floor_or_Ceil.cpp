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
    ll x,n,m ;
    cin>>x>>n>>m ;
    ll ten = n,tem=m,tex=x ;
    ll mi=tex,ma=tex ;
    while(tem+ten){
        if(tex==1ll){
            if(ten>0ll) tex = 0ll ;
            else tex = 1ll ;
            break ;
        }
        if(tex%2ll==0ll){
            
            if(tem>0ll)
            {    
                tex = tex/2ll ;
                tem-- ;
            }
            else{
                tex = tex/2ll ;
                ten-- ;
            }
        }
        else{
            if(ten>0ll){
                tex = tex/2ll ;
                ten-- ;
            }
            else{
                tex = (tex+1ll)/2ll ;
                tem-- ;
            }
        }

        
    }
    mi = tex ;
    ten=n,tem=m,tex=x ;
    while(tem+ten){
        if(tex==1ll){
            if(ten>0ll) tex = 0ll ;
            else tex = 0ll ;
            break ;
        }
        if(tex%2ll==0ll){
            if(ten>0ll)
            {    
                tex = tex/2ll ;
                ten-- ;
            }
            else{
                tex = tex/2ll ;
                tem-- ;
            }
        }
        else{
            if(tem>0ll){
                tex = (tex+1ll)/2ll ;
                tem-- ;
            }
            else{
                tex = tex/2ll ;
                ten-- ;
            }
        } 
    }
    ma = tex ;

    cout<<mi<<" "<<ma<<endl ;
    return ;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}