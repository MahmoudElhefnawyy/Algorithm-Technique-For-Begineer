//Fibonacci
#include<iostream>
using namespace std;
int fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	int num;
	cout << "Enter a num to find Fibonacci series\n";
	cin >> num;
	cout << fibonacci(num) << endl;
}