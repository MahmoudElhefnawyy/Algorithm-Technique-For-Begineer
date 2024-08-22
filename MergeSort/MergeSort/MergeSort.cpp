#include<iostream>
using namespace std;
void Merge(int arr[], int left,int middle, int right)
{
	int n1 = middle - left + 1;
	int n2 = right - middle;
	int l[] = { 0 }, r[] = { 0 };
	for (int i = 0; i < n1; i++)
	{
		l[i] = arr[left + i];
	}
	for (int j = 0; j < n2; j++)
	{
		r[j] = arr[middle + 1 + j];
	}
	int i = 0, j = 0, k = 0;
	while (i < n1 && j < n2)
	{
		if (l[i] <= r[i])
		{
			arr[k] = l[i];
			i++;
		}
		else
		{
			arr[k] = r[j];
			j++;
		}
		k++;
	}
}
void Sort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = (l + r) / 2;
		Sort(arr, l, m);
		Sort(arr, m + 1, r);
		Merge(arr, l, m, r);
	}
}
int main()
{
	int arr[] = { 0 }, size;
	cout << "Enter the size of Array\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the Element of the Array Num\t" << i + 1 << endl;
		cin >> arr[i];
	}
	Sort(arr, 0, 8);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}