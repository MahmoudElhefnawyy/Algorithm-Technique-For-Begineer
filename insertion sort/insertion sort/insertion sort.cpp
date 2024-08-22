//insertion sort
#include <iostream>
using namespace std;
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
    for (int j = 1; j < size; j++)
    {
        int key = arr[j];
        int i = j - 1;
        while (i > 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i - 1;
        }
        arr[i + 1] = key;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
