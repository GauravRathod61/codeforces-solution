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
    cin >> n;
    string s;
    cin >> s;

    vll arr(2, 0);
    rep(i, 0, n) {
        arr[s[i] - '0']++;
    }

    if (arr[0] != arr[1]) {
        cout << "-1\n";
        return;
    }

    ll low = 0, high = n - 1;
    vll an;

    while (low <= high) {
        if (s[low] != s[high]) {
            low++;
            high--;
            continue;
        }
        if (s[low] == '0') {
            s.insert(high + 1, "01");
            an.emplace_back(high + 1);
        } else {
            s.insert(low, "01");
            an.emplace_back(low);
        }
        high += 2;

        if (an.size() >= 300) {
            cout << "-1\n";
            return;
        }
    }

    cout << an.size() << endl;
    for (auto it : an) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    Code_By_GAURAV;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
