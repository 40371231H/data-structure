#include <iostream>
#include <cstdlib>

using namespace std;

int fac(int);

int main(int argc, char **argv)
{
    int n;

    cin >> n;
    cout << fac(n) << endl;
    return 0;
}

int fac(int x)
{
    int v;
    if (x == 0)
    {
        v = 1;
    }
    else
    {
        v = x * fac(x - 1);
    }
    return v;
}