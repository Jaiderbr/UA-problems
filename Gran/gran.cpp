#include <bits/stdc++.h>
#include <numeric>
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

    int test; cin>>test;
    forn(i,test){
        int n; cin>>n;
        map<int,vector<string>> mp;
        forn(i,n){
            string s; cin>>s;
            int x; cin>>x;
            mp[x].pb(s);
        }

        bool ya = 0;
        each(i,mp){
            if(sz(i.s) == 1){
                cout<<i.s[0]<<endl;
                ya = 1;
                break;
            }
        }

        if(!ya){
            cout<<mp.begin()->s[0]<<endl;
        }

    }

    cout << flush;
    return 0;
}