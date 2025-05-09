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

struct edge {
    int v; ll w;

    bool operator < (const edge& x) const {
        return x.w < w;
    }
};

void solve() {

    int n, m; cin >> n >> m;
    int a, b; cin >> a >> b;
    --a; --b;
    vector<vector<edge>> g(n);
    forn(i, m) {
        int u, v; cin >> u >> v;
        --u; --v;
        g[u].pb({ v, 1 });
    }

    vector<ll> dist(n, LONG_LONG_MAX);

    auto dijkstra = [&](edge v) {
        priority_queue<edge> pq;
        pq.push(v);
        dist[v.v] = 0;
        while (sz(pq)) {
            v = pq.top();
            pq.pop();
            if (v.w > dist[v.v]) continue;
            for (edge& u : g[v.v]) {
                if (dist[u.v] > dist[v.v] + u.w) {
                    dist[u.v] = dist[v.v] + u.w;
                    pq.push({ u.v, dist[u.v] });
                }
            }
        }
        };
    dijkstra({ a, 0 });
    int da = dist[b];
    if (da == LONG_LONG_MAX) cout << -1 << endl;
    else cout << da << endl;







}
main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    int testcase; cin >> testcase; while (testcase--) solve();








    cout << flush;
    return 0;
}