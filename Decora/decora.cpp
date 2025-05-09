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

constexpr int mxN = (100);

vector<vector<char>> U(mxN, vector<char>(mxN));
vector<vector<char>> D(mxN, vector<char>(mxN));
vector<vector<char>> L(mxN, vector<char>(mxN));
vector<vector<char>> A(mxN, vector<char>(mxN));
char c = '#';
char bk = ' ';
void pf(vector<vector<char>>& a) {
    forn(i, 10) {
        forn(j, 10) cerr << a[i][j];
        cerr << endl;
    }
    cerr << endl;
}
void init() {
    U = vector<vector<char>>(mxN, vector<char>(mxN, bk));
    D = vector<vector<char>>(mxN, vector<char>(mxN, bk));
    L = vector<vector<char>>(mxN, vector<char>(mxN, bk));
    A = vector<vector<char>>(mxN, vector<char>(mxN, bk));
}

void make_U(int n) {
    forn(i, n) {
        U[i][0] = U[n - 1][i] = U[i][n - 1] = c;
    }
    // pf(U);
}

void make_D(int n) {
    forn(i, n) {
        D[i][0] = D[0][i] = D[n - 1][i] = D[i][n - 1] = c;
    }
    D[0][n - 1] = D[n - 1][n - 1] = bk;
    // pf(D);
}

void make_L(int n) {
    forn(i, n) {
        L[i][0] = L[n - 1][i] = c;
    }
    // pf(L);
}

void make_A(int n) {
    forn(i, n) {
        A[i][0] = A[0][i] = A[i][n - 1] = A[(n - 1) / 2][i] = c;
    }
    // pf(A);
}


void solve() {
    init();


    int n; cin >> n;

    make_U(n), make_D(n), make_L(n), make_A(n);

    forn(i, n) {
        forn(j, n) cout << U[i][j];
        cout << " ";
        forn(j, n) cout << D[i][j];
        cout << " ";
        forn(j, n) cout << L[i][j];
        cout << " ";
        forn(j, n) cout << A[i][j];
        cout << endl;
    }
    cout << endl;










}
main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    int testcase; cin >> testcase; while (testcase--) solve();








    cout << flush;
    return 0;
}