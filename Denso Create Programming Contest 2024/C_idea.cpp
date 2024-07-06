#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto& x : a) cin >> x;
    sort(a.begin(), a.end());

    int p1 = 0, p2 = n - 1;
    for (int i = 0; i < k; ++i) {
        if (a[p2 - 1] - a[p1] < a[p2] - a[p1 + 1]) {
            --p2;
        } else {
            ++p1;
        }
    }

    cout << a[p2] - a[p1] << endl;
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}