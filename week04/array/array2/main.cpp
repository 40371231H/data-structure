#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv)
{
    int myArray[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int newNum;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            newNum = myArray[i][j];
            myArray[i][j] = myArray[j][i];
            myArray[j][i] = newNum;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << myArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}