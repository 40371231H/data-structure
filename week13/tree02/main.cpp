#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct node_type
{
    int data;
    struct node_type *llink;
    struct node_type *rlink;
} Node;

void show(Node *p);
Node *insert(Node *p, int x);

int main(int argc, char **argv)
{
    /*
    Node n1, n2, n3, n4, n5, n6, n7;

    // Level 1
    n1.data = 5;
    n1.llink = &n2;
    n1.rlink = &n3;

    // Level 2
    n2.data = 3;
    n2.llink = &n4;
    n2.rlink = &n5;

    n3.data = 6;
    n3.llink = NULL;
    n3.rlink = &n6;

    // Level 3
    n4.data = 1;
    n4.llink = NULL;
    n4.rlink = &n7;

    n5.data = 4;
    n5.llink = NULL;
    n5.rlink = NULL;

    n6.data = 9;
    n6.llink = NULL;
    n6.rlink = NULL;

    // Level 4
    n7.data = 2;
    n7.llink = NULL;
    n7.rlink = NULL;

    // Show
    show(&n1);
    */

    Node *tree = NULL;

    tree = insert(tree, 5);
    tree = insert(tree, 3);
    tree = insert(tree, 1);
    tree = insert(tree, 6);
    tree = insert(tree, 2);
    tree = insert(tree, 9);
    tree = insert(tree, 4);

    show(tree);

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

Node *insert(Node *p, int x)
{
    Node *q;
    if (p == NULL)
    {
        q = (Node *)malloc(sizeof(Node));
        q->data = x;
        q->llink = NULL;
        q->rlink = NULL;
    }
    else
    {
        if (x < p->data)
        {
            p->llink = insert(p->llink, x);
        }
        else
        {
            p->rlink = insert(p->rlink, x);
        }
        q = p;
    }
    return q;
}