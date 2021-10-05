#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Max 1022
#define mod 1000000007
#define ll long long int
#define ld long double
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif
#define cel(x, a) (((x) + (a)-1) / (a))
#define deb(x) cout << #x << '=' << x << endl
#define deb2(x, y) cout << #x << '=' << x << ',' << #y << '=' << y << endl
#define deb3(x, y, z)                                                        \
    cout << #x << '=' << x << ',' << #y << '=' << y << ',' << #z << '=' << z \
         << endl
#define pf(a, b) cout << fixed << setprecision(b) << a << '\n'
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define F first
#define S second
#define pb push_back
#define pob pop_back()
#define mp make_pair
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define all(s) (s).begin(), (s).end()
ll mult(ll a, ll b, ll p = mod) { return ((a % p) * (b % p)) % p; }
ll add(ll a, ll b, ll p = mod) { return (a % p + b % p) % p; }
template <typename T, typename U>
static inline void amin(T &x, U y) {
    if (y < x) x = y;
}
template <typename T, typename U>
static inline void amax(T &x, U y) {
    if (x < y) x = y;
}
template <typename T>
void printV(vector<T> v) {
    cerr << "[ ";
    for (T i : v) cerr << i << " ";
    cerr << "]\n";
}

void solve() {
    ll n;
    cin >> n;
    vl a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++) cin >> a[i], sum += a[i];
    ll c = sum % n;
    ll rem = n - c;
    cout << rem * c << endl;
}

int main() {
    fio;
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}