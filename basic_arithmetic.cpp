#include <iostream>
using namespace std;

int func_add(int a, int b)
{
	return a + b;
}

int func_subtract(int a, int b)
{
	return b - a;
}

int func_multiply(int a, int b)
{
	return a * b;
}

int func_divide(int a, int b)
{
	return b / a;
}

int func_modulus(int a, int b)
{
	return b % a;
}

int main()
{
	int a;
	int b;
	int operation;
	int result;

	cout << "Please enter two numbers which you want to perform basic arithmetic operatons on:" << endl;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;

	cout << "Please select an operation to perform by entering the operation ID (1-5)" << endl;
	cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus"<< endl;
	cin >> operation;
	switch(operation)
	{
		case 1:
			result = func_add(a, b);
			break;
		case 2:
			result = func_subtract(a, b);
			break;
		case 3:
			result = func_multiply(a, b);
			break;
		case 4:
			result = func_divide(a, b);
			break;
		case 5:
			result = func_modulus(a, b);
			break;
		default:
			cout << "Invalid operation" << endl;
			return 1;
	}
	cout << result << endl;
	return 0;
}
