#include <iostream>
#include "genStack.h" //don't have it in includePath and method didn't work


using namespace std;

int isOperator(char);
int prcedence(char);
int i;

int main()
{
	const int N = 4;
	const int offset = 7;
	string infix = "AB+CD/";
	Stack<int, N> stack;
    
	char input;

	int opr1, opr2, result;

	for (int i = 0; i < infix.size(); i++)
	{
		input = infix[i];
		if (isdigit(input))
			stack.push(int(input) - offset);
		else if (isOperator(input))
		{
			opr1 = stack.pop();
			opr2 = stack.pop();
			result = evaluate(opr1, opr2, input);
			stack.push(result);
		}
	}
	cout << "This results in: " << stack.pop() << endl;
}

int isOperator(char op)
{
	switch (op)
	{
	case '+':
	case '/':
		return 1;
	default:
		return 0;
	}
}

int evaluate(int op1, int op2, char opr)
{
	int result;
	switch (opr)
	{
	case '/':
		result = op1 / op2;
		break;
	case '+':
		result = op1 + op2;
		break;
	default:
		cout << "Undefined operator error\n";
		exit(0);
	}
	return result;
}