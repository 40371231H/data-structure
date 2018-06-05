#include <iostream>
#include <cstdlib>

using namespace std;

int fib(int);

int main(int argc, char **argv)
{
    int n;

    cin >> n;
    cout << fib(n) << endl;
    return 0;
}

int fib(int x)
{
    int v;
    if ((x == 1) || (x == 2))
    {
        v = 1;
    }
    else
    {
        v = fib(x - 1) + fib(x - 2);
    }
    return v;
}