#include <bits/stdc++.h>
using namespace std;
#define endl     '\n' 
#define f        first
#define s        second
#define ins      insert
#define pb       push_back
#define eb       emplace_back
#define sz(x)    int((x).size())
#define all(x)   begin(x), end(x)
typedef long long ll;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < n; ++i)
#define each(i, x) for (auto &&i : x)
#define forne(i,x,n) for (int i = x; i < n; ++i)
#define show(x) for (auto &&i : x) {cerr << i <<' ';} cerr<< endl;


void dbg_out() { cerr << ']' << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << H;if (sizeof...(T)) cerr << ',' << ' '; dbg_out(T...); }
#ifdef LOCAL 
#define dbg(...) cerr << '|' << __LINE__ << '|'<< '{' << #__VA_ARGS__ << '}'<<':'<<' '<<'[', dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define int int64_t

#define PI acos(-1)
struct chash {
    // any random-ish large odd number will do
    const uint64_t C = uint64_t(4e18 * PI) + 71;
    const uint32_t RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    size_t operator()(uint64_t x) const { return __builtin_bswap64((x ^ RANDOM) * C); }
};

template <class K, class V> using u_map = unordered_map<K, V, chash>;
template <class K> using u_set = unordered_set<K, chash>;
void solve() {

    int n; cin >> n;
    int x; char c;
    u_map<char, int> mp;
    forn(i, n) {
        cin >> c >> x;
        mp[c] = x;
    }

    cin >> n;
    cin.ignore();
    u_map<char, int> mp2;
    forn(i, n) {
        string s; getline(cin, s);
        each(j, s) mp2[j]++;
    }

    int ans = 0;
    each(i, mp2) {
        if (mp.count(i.f)) {
            ans += i.s * mp[i.f];
        }
    }

    cout << ans / 100 << "." << ans % 100 << "$" << endl;









}
main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    int testcase; cin >> testcase; while (testcase--) solve();








    cout << flush;
    return 0;
}