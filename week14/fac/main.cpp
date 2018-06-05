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
    int v = 1;
    for (int i = 1; i <= x; i++)
    {
        v = v * i;
    }
    return v;
}