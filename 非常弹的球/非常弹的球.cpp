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
double w, p;
#define esp 1e-13
#define pi acos(-1)
double ret;
void Input() {
	cin >> m >> p;
	for( int i = 1; i <= 90; i++ ) {
		w = 1000.0;
		double v = sqrt(2.0 * w * 100.0 / m + esp);
		double sum = 0;
		while( w > esp ) {
			double lv = v * sin(1.0 * i / 180.0 * pi);
			double hv = v * cos(1.0 * i / 180.0 * pi);
			double h = hv * lv / 9.8;
			sum += h;
			//w *= (1.0-p / 100.0);
			//v = sqrt(2.0 * w * 100.0 / m + esp);
			v = sqrt(2 * w * ( 100.0 - p  ) / m + esp);
			w = w * ( 1.0 - p / 100.0 );
		}
		if( sum - ret > esp ) ret = sum;
	}
	cout << fixed << setprecision(3) << ret*2 << endl;//上升为lv为0是ret+下降(*2)
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
/*
mgh = m * lv * lv / 2
gt = v
mgh = m * gt * gt / 2
h = t * gt / 2
lv/g=t
hv*t=hv*lv/g
*/

//v* v / g/g = t * t
//lv/g = t
//hv*t=hv*lv/g


