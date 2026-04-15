#include <bits/stdc++.h>
#include <iterator>
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

    auto print = [](set<int>&s) {
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

        set<int> A, B, C,aub,buc,anc,anb,aubnbuc,anbuanc;
        forn(i, n) { int x; cin >> x; A.ins(x); }
        forn(i, n) { int x; cin >> x; B.ins(x); }
        forn(i, n) { int x; cin >> x; C.ins(x); }
        
        set_union(all(A),all(B), inserter(aub,begin(aub)));
        set_union(all(B),all(C), inserter(buc,begin(buc)));
        set_intersection(all(A),all(B),inserter(anb,begin(anb)));
        set_intersection(all(A),all(C),inserter(anc,begin(anc)));
        set_intersection(all(aub),all(buc),inserter(aubnbuc,begin(aubnbuc)));
        set_union(all(anb),all(anc),inserter(anbuanc,begin(anbuanc)));

        print(aub);
        print(buc);
        print(anb);
        print(aubnbuc);
        print(anbuanc);
        cout << endl;
    }










    cout << flush;
    return 0;
}
