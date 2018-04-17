#include <iostream>
#include <cstdlib>

#define MaxSize 10
#define NaN -9999

using namespace std;

class STACK
{
  private:
    int stack[MaxSize];
    int top;

  public:
    STACK();
    void push(int v);
    int pop();

  private:
    void init();
};

STACK::STACK()
{
    init();
}

void STACK::push(int v)
{
    if (top >= MaxSize - 1)
    {
        cout << "Stack is full!" << endl;
    }
    else
    {
        top++;
        stack[top] = v;
    }
}

int STACK::pop()
{
    int v = NaN;

    if (top <= -1)
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        v = stack[top];
        top--;
    }

    return v;
}

void STACK::init()
{
    top = -1;
}

int main(int argc, char **argv)
{
    STACK s;
    int x, y;
    int a = 100;
    int b = 200;
    int c = 300;
    int d = 400;

    s.push(a);
    s.push(b);
    s.push(c);
    x = s.pop();
    y = s.pop();
    s.push(d);

    cout << "stack[top] = " << s.pop() << endl;
    cout << "stack[top] = " << s.pop() << endl;
    cout << "stack[top] = " << s.pop() << endl;

    return 0;
}
