#include <bits/stdc++.h>
using namespace std;

int Cal_Mid(int arr[], int low, int high);

void Quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = Cal_Mid(arr, low, high);
        Quick_sort(arr, low, mid - 1);
        Quick_sort(arr, mid + 1, high);
    }
}

int Cal_Mid(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    int arr[n];
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}