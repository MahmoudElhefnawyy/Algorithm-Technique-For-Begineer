//linear srearch
#include<iostream>
using namespace std;
int linearsearch(int arr[], int num)
{
	for (int i = 0; i < sizeof(arr); i++)
	{
		if (num == arr[i])
			return i;
	}
	return -1;
}
int main()
{
	int arr[] = { 0 }, size, key;
	cout << "Enter the size of Array\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the Element of the Array Num\t" << i + 1 << endl;
		cin >> arr[i];
	}
	cout << "Enter the number you search for\n";
	cin >> key;
	cout << linearsearch(arr,key) << endl;
}