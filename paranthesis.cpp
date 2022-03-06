#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
  stack<char> bracket;
  bracket.push(*s.begin());

  for (auto x = s.begin() + 1; x != s.end(); x++) {
    if (bracket.empty()) {
      continue;
    } else if (bracket.top() == *x) {
      bracket.push(*x);
      continue;
    }
    bracket.pop();
  }
  return bracket.empty();
}

int main(int argc, char const *argv[]) {
  cout << isValid("()[]{");
  return 0;
}
