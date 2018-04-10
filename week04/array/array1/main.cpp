#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv)
{
    int myArray[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int newArray[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            newArray[j][i] = myArray[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << newArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}