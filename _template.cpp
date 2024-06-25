#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cstring>

#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <algorithm>
#include <queue>
#include <deque>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

typedef set<int> si;
typedef set<ll> sl;

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a) - 1; i >= 0; i--)

#define is_uppercase(x) (x) >= 'A' && (x) <= 'Z'
#define is_lowercase(x) (x) >= 'a' && (x) <= 'z'

#define f first
#define s second
#define ins insert
#define pb push_back

#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()

#define make_unique(x) \
    sort(all((x)));    \
    (x).resize(unique(all((x))) - (x).begin())

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count = 0;
    int T;
    cin >> T;
  
    while (T--)
    {
        count++;
        solve(count);
    }

    // solve();

    return 0;
}
