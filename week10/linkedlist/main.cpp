#include <iostream>
#include <cstdlib>

#define MaxSize 20

using namespace std;

class ListArray
{
  private:
    int data[MaxSize];
    int head;
    int tail;

  public:
    ListArray();
    void insert(int v);
    void update(int v, int x);
    void kill(int v);
    void read_all();

  private:
    void init();
    bool is_empty();
    bool is_full();
};

ListArray::ListArray()
{
    init();
}

void ListArray::init()
{
    head = -1;
    tail = -1;
}

bool ListArray::is_empty()
{
    bool ret;

    if (head == -1)
    {
        ret = true;
    }
    else
    {
        ret = false;
    }

    return ret;
}

bool ListArray::is_full()
{
    bool ret;

    if (tail == MaxSize - 1)
    {
        ret = true;
    }
    else
    {
        ret = false;
    }

    return ret;
}

void ListArray::insert(int v)
{
    if (is_empty() == true)
    {
        head = 0;
        tail = 0;
        data[tail] = v;
    }
    else
    {
        if (is_full() == true)
        {
            cout << "List is overflow!" << endl;
        }
        else
        {
            tail++;
            data[tail] = v;
        }
    }
}

void ListArray::update(int v, int x)
{
    int i;

    if (is_empty() == false)
    {
        for (i = head; i <= tail; i++)
        {
            if (data[i] == v)
            {
                data[i] = x;
                break;
            }
        }
    }
}

void ListArray::kill(int v)
{
    int i, j;

    if (is_empty() == false)
    {
        for (i = head; i <= tail; i++)
        {
            if (data[i] == v)
            {
                for (j = i + 1; j <= tail; j++)
                {
                    data[j - 1] = data[j];
                }
                tail--;
                break;
            }
        }
    }
}

void ListArray::read_all()
{
    int i;

    if (is_empty() == false)
    {
        for (i = head; i <= tail; i++)
        {
            cout << data[i] << endl;
        }
    }
}

int main(int argc, char **argv)
{
    ListArray lst;

    lst.insert(5);
    lst.insert(4);
    lst.insert(3);
    lst.insert(2);
    lst.insert(1);

    lst.update(4, 7);

    lst.kill(3);

    lst.read_all();

    return 0;
}