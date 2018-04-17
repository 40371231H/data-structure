#include <iostream>
#include <cstdlib>

#define MaxSize 10
#define ErrCode '~'

int order(char op);

using namespace std;

class STACK
{
  private:
	char stack[MaxSize];
	int top;

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
	if (top >= MaxSize - 1)
	{
		cout << "The exp is too long!" << endl;
	}
	else
	{
		top++;
		stack[top] = v;
	}
}

char STACK::pop()
{
	char v = ErrCode;

	if (top <= -1)
	{
		cout << "Too many ) ..." << endl;
	}
	else
	{
		v = stack[top];
		top--;
	}

	return v;
}

bool STACK::is_empty()
{
	bool ret;

	if (top == -1)
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
	top = -1;
}

int main(int argc, char **argv)
{
	// char exp_in[32] = "a+b*(c+d)/e";
	char exp_in[32] = "a+((b-k)*(c+d))/e+g";
	char exp_po[32] = "";
	STACK s;
	int i, j;
	char c;
	char v;

	i = 0;
	c = exp_in[i];
	j = 0;

	while (c != '\0')
	{
		if (c == '(')
		{
			// �Y token �����A�� '('�A�h�Ntoken ��J���|
			s.push(c);
		}
		else if (c == ')')
		{
			// �Y token ���k�A�� ')'�A�h�}�l���X���|���ݲŸ��A�ÿ�X�ܫ�Ǧ����A������X���Ÿ������A�� '(' ����
			v = s.pop();
			while (v != '(')
			{
				exp_po[j] = v;
				j++;
				v = s.pop();
			}
		}
		else if ((c == '+') || (c == '-') || (c == '*') || (c == '/'))
		{
			// �Y���|���O�Ū��A�B���ݲŸ����u���v�j�󵥩� token �ɡA���ݲŸ��Y�i�Q���X�ÿ�X�ܫ�Ǧ���
			if (!s.is_empty())
			{
				v = s.pop();
				s.push(v);
				while (order(v) >= order(c))
				{
					v = s.pop();
					exp_po[j] = v;
					j++;
					if (s.is_empty())
					{
						break;
					}
					v = s.pop();
					s.push(v);
				}
			}
			// �N token ��J���|
			s.push(c);
		}
		else if ((c >= 'a') && (c <= 'z'))
		{
			// �Y token ���B�⤸�A�h�����N�� token ��X�ܫ�Ǧ���
			exp_po[j] = c;
			j++;
		}
		i++;
		c = exp_in[i];
	}

	// �Y�ثe���|�����Ū��A�h���_�N���|���ݲŸ����X�ÿ�X�ܫ�Ǧ����A������|�ŤF����
	while (!s.is_empty())
	{
		v = s.pop();
		exp_po[j] = v;
		j++;
	}

	exp_po[j] = '\0';

	cout << "  infix exp = " << exp_in << endl;
	cout << "postfix exp = " << exp_po << endl;

	return 0;
}

int order(char op)
{
	int ret;
	if (op == '(')
	{
		ret = 0;
	}
	else if (op == '+')
	{
		ret = 1;
	}
	else if (op == '-')
	{
		ret = 1;
	}
	else if (op == '*')
	{
		ret = 2;
	}
	else if (op == '/')
	{
		ret = 2;
	}
	return ret;
}
