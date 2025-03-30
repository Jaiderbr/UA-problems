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


void solve() {


    string s; cin >> s;
    int n = sz(s);
    vector<int>abc(26, 0);
    transform(all(s), s.begin(), ::tolower);

    int pal = 0, l = 0, ans = 0;
    auto add = [&](char a) ->void {
        if (++abc[int(a - 'a')] == 1) pal++;
        };
    auto del = [&](char a)->void {
        if (--abc[int(a - 'a')] == 0) pal--;
        };

    auto count = [&](int i) -> void {
        while (pal == 26 && l <= i) {
            ans += n - i; del(s[l++]);
        }
        };


    forn(i, n) {
        add(s[i]);
        if (pal == 26) count(i);

    }

    cout << ans << endl;



}
main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    int testcase; cin >> testcase; while (testcase--) solve();








    cout << flush;
    return 0;
}