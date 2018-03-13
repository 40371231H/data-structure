#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv)
{
    ifstream ifile;
    ofstream of1, of2;
    int x;

    ifile.open("ok.txt");
    of1.open("odd.txt");
    of2.open("even.txt");

    while (ifile >> x)
    {
        cout << x << endl;
        if (x % 2 == 1)
        {
            of1 << x << endl;
        }
        else
        {
            of2 << x << endl;
        }
    }
    ifile.close();
    of1.close();
    of2.close();
    return 0;
}