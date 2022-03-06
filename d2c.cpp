#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long n;
  vector<long long> arr;
  arr.reserve(100000);
  cin >> n;
  for (long long i = 0; i < n; i++) {
    long long num;
    cin >> num;
    arr.push_back(num);
  }
  sort(arr.begin(), arr.end());
  long long low = arr[(long long)n / 2 - 1];
  long long high = arr[(long long)n / 2];
  if (low == high)
    cout << 0;
  else
    cout << high - low;
}