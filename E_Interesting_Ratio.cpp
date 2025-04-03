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
    ll n;
    cin >> n;
    vector<bool> sieve(n + 1, true);  // Mark sieve up to n
    vector<ll> anvec;
    sieve[0] = sieve[1] = false;  // 0 and 1 are not primes

    rep(i, 2, n + 1) {
        if (sieve[i]) {
            anvec.push_back(i);
            for (ll j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }

    ll an = 0ll;
    for (auto it : anvec) {
        an += n / it;
    }

    cout << an << endl;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
