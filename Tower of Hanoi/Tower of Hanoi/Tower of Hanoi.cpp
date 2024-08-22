//Tower Of Hanoi
#include<iostream>
using namespace std;
void tower_of_Hanoi(int n, char s, char m, char d)// from source To mid to distination
{
	if (n == 1)
		cout << "Move from source to disnation dirctly\n";
	else
	{
		tower_of_Hanoi(n - 1, s, d, m);
		cout << "move from source  to mid\n";
		tower_of_Hanoi(n - 1, m, s, d);
		cout << "move from mid to distination\n";
	}
	cout << "The number of transaction\t" << pow(2, n) - 1 << endl;//the time complexity of Tower of Hanoi =O(2^n)
}
int main()
{
	int num;
	char s, m, d;
	cout << "Enter the num of Rules\n";
	cin >> num;
	tower_of_Hanoi(num,s,m,d);
}