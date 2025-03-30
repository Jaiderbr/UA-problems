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

bool pal(int num) {
    string s = to_string(num);
    string rev = s;
    reverse(all(rev));
    return s == rev;
}


void solve() {

    int a; cin >> a;

    int n = sz(to_string(a)), mn = pow(10, n - 1), mx = pow(10, n) - 1, mb = -1;
    if (mn == 1) mn = 0;
    forne(b, mn, mx + 1) {
        if (pal(a + b)) { mb = b; break; }
    }

    int bm = -1;
    for (int b = mx; b >= mn; b--) {
        if (pal(a + b)) { bm = b; break; }
    }

    if (mb == -1 || bm == -1 || !pal(a + mb) || !pal(a + bm)) assert(0);

    cout << a << " + " << mb << " = " << a + mb << endl;
    cout << a << " + " << bm << " = " << a + bm << endl;









}
main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    int testcase; cin >> testcase; while (testcase--) solve();
    exit(0);

    int n = 1e6;
    n += n;
    int cuantos = 0;
    forn(i, n + 1) {
        if (pal(i)) {
            cout << i << endl;
            cuantos++;
        }
    }
    cout << "Cuantos: " << cuantos << endl;








    cout << flush;
    return 0;
}