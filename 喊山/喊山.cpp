/*****************************************************************************
* @author  : xhc                                                             *
*****************************************************************************/

// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;

const int N1 = 1e1 + 5;
const int N2 = 1e2 + 5;
const int N3 = 1e3 + 5;
const int N4 = 1e4 + 5;
const int N5 = 1e5 + 5;
const int N6 = 1e6 + 5;
const int N7 = 1e7 + 5;
#define ll long long
#define pb push_back
#define ft(i, st, n) for(int i = st; i < (int)(n); i ++)
#define fte(i, st, n) for(int i = st; i <= (int)(n); i ++)
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define scanf scanf_s
int n, m;
string s;
stringstream ss;
int k, u, v, retid, mxx;
vector<int>G[N4];
void BFS(int u) {
    mxx = 0;
    retid = inf;
    queue<int>qu;
    qu.push(u);
    int id = u;
    int dis[N4];
    int vis[N4] = { 0 };
    memset(dis, inf, sizeof dis);
    vis[u] = 1;
    dis[u] = 0;
    while( qu.size() ) {
        u = qu.front();
        vis[u] = 0;
        //cout << u << ":" << endl;
        if( mxx < dis[u] ) {
            mxx = dis[u];
            retid = u;
        }else if( mxx == dis[u]&&retid > u && u!=id) retid = u;
        qu.pop();
        for( int i = 0; i < G[u].size(); i++ ) {
            int v = G[u][i];
            if( dis[u] + 1 < dis[v] ) {
                dis[v] = dis[u] + 1;
                //cout << "dis[" << v << "]" << ' '<<dis[v] << endl;
                if( vis[v] == 0 ) {
                    vis[v] = 1;
                    qu.push(v);
                }
            }
        }
    }
}
void Input() {
	cin >> n >> m >> k;
	ft(i, 0, m) {
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	ft(i, 0, k) {
		cin >> u;
		BFS(u);
        cout << ( retid == inf ? 0 : retid ) << endl;
	}
	return;
}
void Solve() {
	return;
}
void Print() {
	return;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	Input();
	Solve();
	Print();
	return 0;
}
