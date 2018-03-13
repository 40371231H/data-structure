#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv)
{
    ofstream ofile;

    ofile.open("ok.txt");

    ofile.close();
    return 0;
}