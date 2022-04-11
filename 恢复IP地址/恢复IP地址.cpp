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
int n, m, x;
string s;
stringstream ss;
string a, b, c, d;
bool ok, v;
void Input() {
	cin >> s;
	return;
}
int ff(string s) {
	stringstream ss;
	int n;
	ss << s; ss >> n; ss.clear();
	return n;
}
string FF(int n) {
	stringstream ss;
	string s;
	ss << n; ss >> s; ss.clear();
	return s;
}
void Solve() {
	int len = s.size();
	fte(i, 1, 3) {
		fte(j, 1, 3) {
			fte(k, 1, 3) {
				if( i + j + k >= len ) continue;
				a = s.substr(0, i);
				b = s.substr(i, j);
				c = s.substr(i + j, k);
				d = s.substr(i + j + k);
				int aa = ff(a);
				int bb = ff(b);
				int cc = ff(c);
				int dd = ff(d);
				string str = a + b + c + d;
				string cstr = FF(aa) + FF(bb) + FF(cc) + FF(dd);
				if( aa <= 255 && bb <= 255 && cc <= 255 && dd <= 255 && str == cstr ) {
					ok = true;
					cout << a << '.' << b << '.' << c << '.' << d << endl;
				}
			}
		}
	}
	if( !ok ) {
		cout << "None" << endl;
	}
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
