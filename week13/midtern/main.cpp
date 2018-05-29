#include <cstdlib>
#include <iostream>

using namespace std;

#define ErrCode '~'

typedef struct node_type
{
    char data;
    struct node_type *link;
} Node;

class STACK
{
  private:
    Node *head;

  public:
    STACK();
    void push(char v);
    char pop();
    bool is_empty();

  private:
    void init();
};

STACK::STACK()
{
    init();
}

void STACK::push(char v)
{
    Node *p;

    p = (Node *)malloc(sizeof(Node));
    p->data = v;
    p->link = head;

    head = p;
}

char STACK::pop()
{
    char v = ErrCode;
    Node *p;
    p = head;

    if (head == NULL)
    {
        cout << "Linked List is empty!" << endl;
    }
    else
    {
        v = p->data;
        p = p->link;
    }

    head = p;

    return v;
}

bool STACK::is_empty()
{
    bool ret;

    if (head == NULL)
    {
        ret = true;
    }
    else
    {
        ret = false;
    }

    return ret;
}

void STACK::init()
{
    head = NULL;
}

int main(int argc, char *argv[])
{
    STACK s;

    s.push('1');
    s.push('2');
    s.push('3');

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    return 0;
}