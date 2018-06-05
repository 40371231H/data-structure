#include <cstdlib>
#include <iostream>

using namespace std;

#define ErrCode '~'

typedef struct node_type
{
    int data;
    struct node_type *llink;
    struct node_type *rlink;
} Node;

void show(Node *p);

int main(int argc, char *argv[])
{
    Node n1, n2, n3, n4, n5, n6, n7;

    // Level 1
    n1.data = 2;
    n1.llink = &n2;
    n1.rlink = &n3;

    // Level 2
    n2.data = 3;
    n2.llink = &n4;
    n2.rlink = NULL;

    n3.data = 7;
    n3.llink = &n5;
    n3.rlink = &n6;

    // Level 3
    n4.data = 5;
    n4.llink = NULL;
    n4.rlink = NULL;

    n5.data = 1;
    n5.llink = NULL;
    n5.rlink = &n7;

    n6.data = 6;
    n6.llink = NULL;
    n6.rlink = NULL;

    // Level 4
    n7.data = 4;
    n7.llink = NULL;
    n7.rlink = NULL;

    show(&n1);
    return 0;
}

void show(Node *p)
{
    if (p != NULL)
    {
        show(p->llink);
        cout << p->data << endl;
        show(p->rlink);
    }
}