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

string dec_to_bin(int64_t n) {
    string s;
    while (n) {
        if (n & 1) s.pb('1');
        else s.pb('0');
        n >>= 1;
    }
    reverse(all(s));
    return s;
}
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int test; cin>>test;
    forn(i,test){
        int n;  cin>>n;
        cout<<dec_to_bin(n)<<endl;
    }




    cout << flush;
    return 0;
}