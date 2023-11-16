#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
bool vis[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n = N - 9;
  vector<int> primes;
  vis[1] = true;
  for (int i = 2; i <= n; i++) {
    if (!vis[i]) {
      primes.push_back(i);
      for (int j = i + i; j <= n; j += i) {
        vis[j] = true;
      }
    }
  }
  cout << primes.size() << '\n';
  return 0;
}
