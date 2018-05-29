#include <cstdlib>
#include <iostream>

typedef struct node_type
{
    char data;
    struct node_type *link;
} Node;

using namespace std;

int main(int argc, char *argv[])
{
    Node n1;
    Node n2;
    Node n3;
    Node n4;
    Node n5;

    n1.data = 'e';
    n1.link = &n2;
    n2.data = 'b';
    n2.link = &n3;
    n3.data = 'c';
    n3.link = &n4;
    n4.data = 'a';
    n4.link = &n5;
    n5.data = 'f';
    n5.link = NULL;

    cout << n1.data << endl;
    return 0;
}