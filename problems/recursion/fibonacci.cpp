#include <bits/stdc++.h>

using namespace std;

int fib(int n)
{
    if (n <= 1)
        return 1;
    return fib(n - 2) + fib(n - 1);
}

int main()
{
    int n = 5;
    cout << fib(n);
    return 0;
}