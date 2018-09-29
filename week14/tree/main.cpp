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