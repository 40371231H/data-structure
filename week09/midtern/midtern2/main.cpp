#include <iostream>
#include <cstdlib>
#include <cstdio>

#define Size 10
#define NONE -9999

using namespace std;

class STACK
{
  private:
    char data[Size];
    int top;

  public:
    STACK()
    {
        init();
    }
    void push(char x);
    char pop();
    bool is_empty();

  private:
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
    char str[10];
    char c, x;
    int i;

    gets(str);

    i = 0;
    c = str[i];

    while (c != '\0')
    {
    	
    	if(i == 0){
    		stack.push(c);
    	}else{
    		x = stack.pop();
    		stack.push(x);
    		if (c > x)
        	{
            	stack.push(c);
       	 	}
        	else
        	{
         		cout<<c;   
        	}
    	}
        
        i++;
        c = str[i];
    }
    
    while(stack.is_empty() == false){
    	x = stack.pop();
    	cout<<x;
    }
    cout<<endl;


    system("pause");
    return 0;
}
