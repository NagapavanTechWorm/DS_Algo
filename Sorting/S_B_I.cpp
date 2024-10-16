#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        int loc = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                loc = j;
                min = arr[j];
            }
        }
        swap(arr[i], arr[loc]);
    }
}

void Bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void Insert_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{
    int n;
    cout << "enter array size:" << endl;
    cin >> n;
    int arr[n];
    cout << "enter array" << n << "elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Selection_Sort(arr, n);
    Bubble_sort(arr, n);
    Insert_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}