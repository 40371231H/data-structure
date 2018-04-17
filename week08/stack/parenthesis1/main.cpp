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
    char exp_in[32] = "a+b*(c+d)/e";
    char exp_out[32] = "";
    char str[64];
    char c, v, x;
    int i = 0;
    int j = 0;

    gets(str);
    c = exp_in[i];

    while (c != '\0')
    {
        if (c == '(')
        {
            stack.push(c);
        }
        else if (c == ')')
        {
            v = stack.pop();
            while (v != '(')
            {
                exp_out[j] = v;
                j++;
                v = stack.pop();
            }
        }
        else if (c == '+' || c == '-')
        {
            v = stack.pop();
            if (v != -9999 && v != '(')
            {
                exp_out[j] = v;
                j++;
            }
            stack.push(c);
        }
        else if (c == '*' || c == '/')
        {
            v = stack.pop();
            while (v != -9999)
            {
                if (v == '*' || v == '/')
                {
                    exp_out[j] = v;
                    j++;
                }
                stack.push(c);
            }
        }
        else if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0')
        {
            exp_out[j] = c;
            j++;
        }

        /*
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
        c = str[i];*/
    }

    while (j)
    {
        for (int m = 0; m < j; m++)
        {
            cout << exp_out[m];
        }
    }
    if (stack.is_empty() == true)
    {
        /*cout << str << " is a legal expression." << endl;*/
    }
    else
    {
        /*cout << str << " is an illegal expression!" << endl;*/
    }

    system("pause");
    return 0;
}