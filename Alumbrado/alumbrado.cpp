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


#define sq(x) ((x)*(ll)(x))

struct pt { // punto
    int x, y;
    pt(int x_ = 0, int y_ = 0) : x(x_), y(y_) {}
    bool operator < (const pt p) const {
        if (x != p.x) return x < p.x;
        return y < p.y;
    }
    bool operator == (const pt p) const {
        return x == p.x and y == p.y;
    }
    pt operator + (const pt p) const { return pt(x + p.x, y + p.y); }
    pt operator - (const pt p) const { return pt(x - p.x, y - p.y); }
    pt operator * (const int c) const { return pt(x * c, y * c); }
    ll operator * (const pt p) const { return x * (ll)p.x + y * (ll)p.y; }
    ll operator ^ (const pt p) const { return x * (ll)p.y - y * (ll)p.x; }
    friend istream& operator >> (istream& in, pt& p) {
        return in >> p.x >> p.y;
    }
};

struct line { // recta
    pt p, q;
    line() {}
    line(pt p_, pt q_) : p(p_), q(q_) {}
    friend istream& operator >> (istream& in, line& r) {
        return in >> r.p >> r.q;
    }
};

// PONTO & VETOR


ll sarea2(pt p, pt q, pt r) { // 2 * area con signo
    return (q - p) ^ (r - q);
}


bool ccw(pt p, pt q, pt r) { // si p, q, r estan en sentido antihorario
    return sarea2(p, q, r) > 0;
}

int quad(pt p) { // cuadrante de un punto
    return (p.x < 0) ^ 3 * (p.y < 0);
}

bool compare_angle(pt p, pt q) { // retorna si ang(p) < ang(q)
    if (quad(p) != quad(q)) return quad(p) < quad(q);
    return ccw(q, pt(0, 0), p);
}


// RETA

bool isinseg(pt p, line r) { // si p pertenece al segmento de r
    pt a = r.p - p, b = r.q - p;
    return (a ^ b) == 0 and (a * b) <= 0;
}

bool interseg(line r, line s) { // si el segmento de r intersecta el segmento de s
    if (isinseg(r.p, s) or isinseg(r.q, s)
        or isinseg(s.p, r) or isinseg(s.q, r)) return 1;

    return ccw(r.p, r.q, s.p) != ccw(r.p, r.q, s.q) and
        ccw(s.p, s.q, r.p) != ccw(s.p, s.q, r.q);
}



void solve(){

    pt A,B,Q,P; cin>>A>>B>>Q>>P;

    line ff(A,B);
    line ss(Q,P);
    if(interseg(ff,ss)) cout<<"NO"<<endl;
    else cout<<"SI"<<endl;
    



    

}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int test; cin>>test;
    forn(i,test) {
        solve();
    }

    

    cout << flush;
    return 0;
}