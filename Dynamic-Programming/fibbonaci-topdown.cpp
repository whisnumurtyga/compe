#include <iostream>
#include <vector>
using namespace std;

int fibonacciTopDown(int n, std::vector<int>& memo) {
    if (n <= 1) {
        return n;
    }

    if (memo[n] != -1) {
        return memo[n];
    }

    memo[n] = fibonacciTopDown(n - 1, memo) + fibonacciTopDown(n - 2, memo);
    return memo[n];
}

int fibonacci(int n) {
    std::vector<int> memo(n + 1, -1);
    return fibonacciTopDown(n, memo);
}

int main() {
    int n = 0;
    cin >> n;
    int result = fibonacci(n);
    cout << "Fibonacci of " << n << ": " << result << std::endl;
    return 0;
}
