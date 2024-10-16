#include <bits/stdc++.h>
using namespace std;

void Merge_sort(int arr[], int low, int high);
void Merge(int arr[], int low, int mid, int high);

void Merge_sort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (high + low) / 2;
    Merge_sort(arr, low, mid);
    Merge_sort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
}

void Merge(int arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> ar;
    while (left <= mid && right <= high)
    {

        if (arr[left] < arr[right])
        {
            ar.push_back(arr[left]);
            left++;
        }
        else
        {
            ar.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        ar.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        ar.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = ar[i - low];
    }
}

int main()
{
    vector<int> arr = {4, 3, 6, 5, 1, 8, 9, 2, 7, 0};
    int n = arr.size();
    Merge_sort(arr.data(), 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}