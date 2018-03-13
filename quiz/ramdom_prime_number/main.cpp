#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int i, j;
int count = 0;
int minus_count = 0;
int num;
bool k = true;

// int prime_number(int);
bool is_a_prime(int);
int main(int argc, char **argv)
{
    int count = 0;
    int list[10000];
    unsigned seed;
    seed = (unsigned)time(NULL);
    srand(seed);
    for (i = 0; i < 10000; i++)
    {
        num = rand() % 32768 + 1;
        // cout << num << endl;
        list[i] = num;
        if (is_a_prime(num))
        {
            count++;
        }
        // prime_number(num);
    }
    for (i = 0; i < 10000; i++)
    {

        cout << list[i] << endl;
    }
    cout << "這些數字中有 " << count << " 個質數" << endl;
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
