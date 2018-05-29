#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x;
    int y;
    int *p;

    p = &y; // p = &x;

    x = 100;
    y = 300;

    cout << "x = " << x << ", y = " << y << endl;

    *p = 200;

    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
