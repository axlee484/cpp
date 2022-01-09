#include <iostream>
#include <vector>
using std::vector;using std::cout; using std::cin;


int fibonacci(int n, vector<int>& memo) {
    //base
    if (n == 0 || n == 1)
        return 1;
    //recursive
    if (memo.size() <= n) {
        memo.push_back(fibonacci(n - 1, memo) + fibonacci(n - 2, memo));//[1 1]
    }
    return memo[n];




}

int main() {
    int t;
    cin >> t;
    vector<int> memo = { 1,1 };
    memo.reserve(t);
    cout << fibonacci(t, memo);


}