#include <iostream>
#include <cstdlib>
#include <cstdio>

#define Size 10
#define NONE -9999

using namespace std;

class STACK
{
  private:
    // Properties
    char data[Size];
    int top;

  public:
    // Constructor
    STACK()
    {
        init();
    }
    // Public Methods
    void push(char x);
    char pop();
    bool is_empty();

  private:
    // Private Methods
    void init();
};

void STACK::push(char x)
{
    if (top >= Size)
    {
        cout << "STACK is fill!" << endl;
    }
    else
    {
        top++;
        data[top] = x;
    }
}

char STACK::pop()
{
    int v;
    if (top < 0)
    {
        cout << "STACK is empty!" << endl;
        v = NONE;
    }
    else
    {
        v = data[top];
        top--;
    }
    return v;
}

bool STACK::is_empty()
{
    bool empty = false;
    if (top < 0)
    {
        empty = true;
    }
    return empty;
}

void STACK::init()
{
    top = -1;
}

int main(int argc, char **argv)
{
    STACK stack;
    char str[64];
    char c, x;
    int i;

    gets(str);

    i = 0;
    c = str[i];

    while (c != '\0')
    {
        if (c == '(')
        {
            stack.push(c);
        }
        else if (c == ')')
        {
            x = stack.pop();
            if (x != '(')
            {
                cout << "illegal expression!" << endl;
                exit(1);
            }
        }
        i++;
        c = str[i];
    }

    if (stack.is_empty() == true)
    {
        cout << str << " is a legal expression." << endl;
    }
    else
    {
        cout << str << " is an illegal expression!" << endl;
    }

    system("pause");
    return 0;
}