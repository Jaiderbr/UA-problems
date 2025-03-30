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

vector<string> split(string& in) {
    vector<string> result;
    // regex pattern("[^a-zA-Z]|paraagregarmas|");
    // in = regex_replace(in, pattern, " ");
    transform(all(in), in.begin(), ::tolower);
    istringstream iss(in);
    while (iss >> in) result.pb(in);

    return result;
}

void solve() {

    string s; getline(cin, s);
    string b; getline(cin, b);

    auto sa = split(s), ba = split(b);
    int pos = 0, match = 0;
    auto find = [&](string& word) {
        while (pos < sz(ba) && ba[pos] != word) pos++;
        };

    map<string, int> mp;
    each(i, sa) {
        find(i);
        if (pos < sz(ba)) {
            match++, pos++;
            mp[i] = 0;
        }
        else break;
    }
    forn(i, sz(ba)) {
        if (mp.count(ba[i])) mp[ba[i]]++;
    }


    double ans = match * 100.0 / sz(sa);
    cout << fixed << setprecision(6) << match << " " << ans << endl;

    each(i, mp) cout << i.f << " " << i.s << endl;









}
main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    int testcase; cin >> testcase;
    cin.ignore();
    while (testcase--) solve();








    cout << flush;
    return 0;
}