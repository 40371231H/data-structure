#include <iostream>
#include <cstdlib>
// #include <cstdio>
// #include <cmath>

using namespace std;

bool is_a_prime(int x);

int main(int argc, char** argv) {
    int i;
    while(cin >> i){
        if(is_a_prime(i) == true)
            cout << i << " is a prime number." << endl;
        else
            cout << i << " isn't a prime number." << endl;   
    }
}

bool is_a_prime(int x) {
    bool ret, found;
    int j;
    found = false;
    for(j = 2; j <= x - 1; j++) {
        if(x % j == 0) {
            found = true;
            break;
        }
    }
    if(found == false) {
        ret = true;
    }else {
        ret = false;
    }

    return ret;
}