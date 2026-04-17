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


signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    auto solve = [](char d, string s) {
        string ans = "";
        each(i, s) if (i != d) ans.pb(i);
        int i = 0;
        while (i < sz(ans) && ans[i] == '0') i++;
        ans = ans.substr(i);

        if (ans.empty()) return string("0");
        return ans;
        };

    while (true) {
        char d; string s;
        cin >> d >> s;

        if (d == '0' && s == "0") break;

        cout << solve(d, s) << endl;
    }

    cout << flush;
    return 0;
}