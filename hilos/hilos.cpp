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

template<typename T>
struct Graph {
    int n;
    vector<vector<T>> adj;
    vector<T> side;
    Graph(int size) {
        n = size;
        adj.resize(n);
        side.resize(n, -1);
    }

    void addEdge(int u, int v, int uno) {
        v -= uno; u -= uno;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool is_bipartite() {
        bool check = true;
        queue<int> q;
        for (int edge = 0; edge < n; ++edge) {
            if (side[edge] == -1) {
                q.push(edge);
                side[edge] = 0;
                while (q.size()) {
                    int curr = q.front();
                    q.pop();
                    for (auto neig : adj[curr]) {
                        if (side[neig] == -1) {
                            side[neig] = (1 ^ side[curr]);
                            q.push(neig);
                        }
                        else {
                            check &= (side[neig] != side[curr]);
                        }
                    }
                }
            }
        }
        return check;
    }
};

double dis(pair<int, int> a, pair<int, int> b) {
    return sqrt((a.f - b.f) * (a.f - b.f) + (a.s - b.s) * (a.s - b.s));
}
constexpr double EPS = 1e-8;
constexpr double INF = 1e5;

double get(vector<pair<int, int>>& nums) {
    int n = sz(nums);
    double l = 0, r = INF, ans = -1;

    vector<vector<double>> dist(n, vector<double>(n, 0));
    forn(i, n) {
        forne(j, i + 1, n) {
            dist[i][j] = dist[j][i] = dis(nums[i], nums[j]);
        }
    }

    while (r - l > EPS) {
        double mid = (l + r) / 2;
        Graph<int> g(n);
        forn(i, n) {
            forne(j, i + 1, n) {
                if (dist[i][j] < mid) g.addEdge(i + 1, j + 1, 1);
            }
        }

        if (g.is_bipartite()) ans = mid, l = mid;
        else r = mid;
    }

    return r;
}



void solve() {


    int n; cin >> n;
    vector<pair<int, int>> nums(n);
    forn(i, n) cin >> nums[i].f >> nums[i].s;

    double ans = get(nums);
    if (ans == INF) cout << "INF" << endl;
    else cout << fixed << setprecision(6) << ans << endl;










}
main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    int testcase; cin >> testcase; while (testcase--) solve();








    cout << flush;
    return 0;
}

