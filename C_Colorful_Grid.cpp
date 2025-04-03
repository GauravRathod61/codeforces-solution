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
    ll n,m,k ;
    cin>>n>>m>>k ;

    if((n+m-2)>k){
        no ;
        return ;
    }
    ll dif = k - (n+m-2) ;
    if(dif%2ll==1ll){
        no ;
        return ;
    }
    if(dif%4ll==0ll){
        yes ;
        char c = 'R' ;
        repp(i,1,m-1) {
            if(c=='R'){
                cout<<c<<" " ;
                c = 'B' ;
            }
            else{
                cout<<c<<" " ;
                c = 'R' ;
             }
            
        }
        cout<<endl ;
        repp(i,1,n-1){
            repp(j,1,m-1){
                cout<<"R"<<" " ;
            }
            cout<<endl ;
        }

        repp(i,1,n-1){
            repp(j,1,m-1){
                cout<<'B'<<" " ;
            }
            cout<<c<<endl ;
            if(c=='R') c = 'B' ;
            else c = 'R' ;
        }
        return ;
    }
    else{
        yes ;
        char c = 'R' ;
        char d,e ;
        if((m-1+n-2ll)%2ll==0ll) d ='R' ;
        else d = 'B' ;
        if((m-1+n-2ll)%2ll==0ll) e ='B' ;
        else e = 'R' ;

        repp(i,1,m-1) {
            if(c=='R'){
                cout<<c<<" " ;
                c = 'B' ;
            }
            else{
                cout<<c<<" " ;
                c = 'R' ;
             }
            
        }
        cout<<endl ;
        repp(i,2,n){
            repp(j,1,m-1){
                if((i==n-1 && j==m-1) || (i==n && j==m-1)) cout<<d<<" " ;
                else cout<<"R"<<" " ;
            }
            cout<<endl ;
        }

        repp(i,1,n-1){
            repp(j,1,m-1){
                if(i==n-1ll && j==m-1ll) cout<<e<<" " ;
                else cout<<'B'<<" " ;
            }
            cout<<c<<endl ;
            if(c=='R') c = 'B' ;
            else c = 'R' ;
        }
        return ;

    }

    cout<<"for 2 we will check"<<endl ;
    
    return ;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}