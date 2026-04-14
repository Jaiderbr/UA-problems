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

    auto uni = [](const set<int>& a, const set<int>& b) {
        set<int> r = a;
        each(i, b) r.ins(i);
        return r;
        };

    auto inter = [](const set<int>& a, const set<int>& b) {
        set<int> r;
        each(i, a) if (b.count(i)) r.ins(i);
        return r;
        };

    auto printSet = [](const set<int>& s) {
        bool alt = true;

        each(x, s) {
            if (!alt) cout << ' ';
            cout << x;
            alt = false;
        }
        cout << endl;
        };

    int test; cin >> test;
    while (test--) {

        int n; cin >> n;

        set<int> A, B, C;
        forn(i, n) { int x; cin >> x; A.ins(x); }
        forn(i, n) { int x; cin >> x; B.ins(x); }
        forn(i, n) { int x; cin >> x; C.ins(x); }

        auto AB = uni(A, B);
        auto BC = uni(B, C);
        auto AintB = inter(A, B);
        auto op4 = inter(AB, BC);
        auto AintC = inter(A, C);
        auto op5 = uni(AintB, AintC);

        printSet(AB);
        printSet(BC);
        printSet(AintB);
        printSet(op4);
        printSet(op5);
        cout << endl;
    }










    cout << flush;
    return 0;
}