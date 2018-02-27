#include <iostream>
#include <cstdlib>
// #include <cstdio>
// #include <cmath>

using namespace std;

int main(int argc, char** argv){
    bool found;
    int i, j;
    for(i = 2; i <= 100; i++){
        found = false;
        for(j = 2; j <= i - 1; j++){
            if(i % j == 0){
                found = true;
                break;
            }
        }
        if(found == false){
            cout << i << " is a prime number." << endl;
        }
    }
}