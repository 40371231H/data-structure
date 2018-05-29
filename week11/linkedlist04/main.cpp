#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct node_type
{
    char data;
    struct node_type *link;
} Node;

class LList
{
  private:
    Node *head;

  public:
    LList();
    void insert(char c);
    void show();
};

LList::LList()
{
    head = NULL;
}

void LList::insert(char c)
{
    Node *p;

    p = (Node *)malloc(sizeof(Node));
    p->data = c;
    p->link = head;

    head = p;
}

void LList::show()
{
    Node *p;
    p = head;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->link;
    }
    cout << "Ending" << endl;
}
int main(int argc, char *argv[])
{
    LList lst;
    lst.insert('e');
    lst.insert('b');
    lst.insert('c');
    lst.insert('a');
    lst.insert('f');

    lst.show();
    return 0;
}