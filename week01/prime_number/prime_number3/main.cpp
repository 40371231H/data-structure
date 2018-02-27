#include <iostream>
#include <cstdlib>

bool is_a_prime(int x);

using namespace std;

int main(int argc, char **argv)
{
    int x;
    int n;

    x = 2;
    n = 0;

    while (n < 100)
    {
        if (is_a_prime(x) == true)
        {
            cout << x << " is a prime number!" << endl;
            n++;
        }
        x++;
    }

    system("pause");
    return 0;
}

bool is_a_prime(int x)
{
    bool yes;
    int i;

    yes = true;
    for (i = 2; i <= x - 1; i++)
    {
        if (x % i == 0)
        {
            yes = false;
            break;
        }
    }

    return yes;
}