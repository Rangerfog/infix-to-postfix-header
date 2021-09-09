#include"intopox.h"
using namespace std;
int main()
{
	char Q[100];
	char *e, x;
	cout << "Enter the expression of Q: ";
	cin >> Q;
	cout << endl;
	e = Q;

	while (*e != '\0')
	{
		if (isalnum(*e))
			cout << *e;
		else if (*e == '(')
			push(*e);
		else if (*e == ')')
		{
			while ((x = pop()) != '(')
				cout << x;

		}
		else
		{
			while (priority(stack[top]) >= priority(*e))
				cout << pop();
			push(*e);
		}
		e++;
	}

	while (top != -1)
	{
		cout << pop();
	}

	return 0;
}
