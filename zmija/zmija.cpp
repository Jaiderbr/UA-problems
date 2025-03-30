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
#define dir n-1-i

void dbg_out() { cerr << ']' << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << H;if (sizeof...(T)) cerr << ',' << ' '; dbg_out(T...); }
#ifdef LOCAL 
#define dbg(...) cerr << '|' << __LINE__ << '|'<< '{' << #__VA_ARGS__ << '}'<<':'<<' '<<'[', dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define int int64_t


constexpr int mxN = 1005 + 100;
constexpr int inf = ((1ULL << 63) - 1) >> 32;
main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, m, sol; cin >> n >> m;
    vector<int> dirl(mxN, inf), dirr(mxN, -inf);
    vector<string> grid(n + 100);

    forn(i, n) cin >> grid[i];
    for (int i = n - 1; i >= 0; --i) {
        forn(j, m) {
            if (grid[i][j] == 'J') {
                dirl[dir] = min(dirl[dir], j);
                dirr[dir] = max(dirr[dir], j);
                sol = dir;
            }
        }
    }

    int x = 0;
    forne(i, 1, n + 1) {
        if (i & 1) {
            int alt = max({ x,dirr[i - 1], dirr[i] });
            sol += alt - x, x = alt;
        }
        else {
            int alt = min({ dirl[i - 1], dirl[i],x });
            sol += x - alt, x = alt;
        }
    }

    cout << sol << endl;










    cout << flush;
    return 0;
}