#include <iostream>
#include <cstdlib>

#define MaxSize 10
#define NaN -9999

void push(int v);
int pop();

using namespace std;

int stack[MaxSize];
int top = -1;

int main(int argc, char **argv)
{
    int x, y;
    int a = 100;
    int b = 200;
    int c = 300;
    int d = 400;

    push(a);
    push(b);
    push(c);
    x = pop();
    y = pop();
    push(d);

    cout << "stack[top] = " << pop() << endl;
    cout << "stack[top] = " << pop() << endl;
    cout << "stack[top] = " << pop() << endl;

    return 0;
}

void push(int v)
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

int pop()
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