#include<iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using std::cout;using std::cin;using std::unordered_map;using std::vector;using std::sort;

bool comp(int a, int b) {
    return a > b;
}
template <typename T, typename U>
std::pair<T, U> make_pair(T t, U u) {
    std::make_pair(t, u);
}


int min_coin() {
    

}


int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << min_coin();
    }

}

