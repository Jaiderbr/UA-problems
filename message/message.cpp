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

vector<vector<char>> rotar(vector<vector<char>>& a) {
    int n = sz(a), m = sz(a[0]);
    vector<vector<char>> v(m, vector<char>(n));
    forn(i, n) {
        forn(j, m) {
            v[j][n - 1 - i] = a[i][j];
        }
    }
    return v;
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    int test; cin >> test;
    forn(i, test) {
        string s; cin >> s;
        int n = sz(s);

        int k = 1;
        while (k * k < n) k++;

        vector<vector<char>> g(k, vector<char>(k));
        int c = 0;
        forn(i, k) {
            forn(j, k) {
                if (c < n) {
                    g[i][j] = s[c++];
                }
                else {
                    g[i][j] = '*';
                }
            }
        }

        g = rotar(g);

        forn(i, k) {
            forn(j, k) {
                if (g[i][j] != '*') cout << g[i][j];
            }
        }

        cout << endl;



    }


    cout << flush;
    return 0;
}