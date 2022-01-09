#include <iostream>
#include <vector>
using std::cout, std::cin, std::vector


int fibonacci(int n, vector<int>& memo) {
    //base
    if (n == 0 || n == 1)
        return 1;
    //recursive

}

int main() {
    int t;
    cin >> t;
    vector<int> memo = { 1,1 };
    cout << fibonacci(t, memo);
}