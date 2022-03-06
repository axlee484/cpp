#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solution() {
  ll arr[100], sum[100];
  ll n, x;
  cin >> n >> x;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sum[0] = arr[0] + x;
  for (int i = 1; i < n; i++) {
    sum[i] = sum[i - 1] + arr[i];
  }

  ll max = 0;
  for (int i = 0; i < n; i++) {
    if (sum[i] > max) {
      max = sum[i];
    }
  }
  cout << max << "\n";
}

int main() {
  int T;
  cin >> T;
  while (T--) solution();
}