#include <bits/stdc++.h>
using namespace std;
void Print_Num_N_times(int n)
{
    if (n < 1)
    {
        return;
    }
    Print_Num_N_times(n - 1);
    cout << n << endl;
}

void Print_Num_N_times_Rev(int n)
{
    if (n < 0)
    {
        return;
    }
    cout << n << endl;
    Print_Num_N_times_Rev(n - 1);
}

void Print_name_n_time(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "name: Nagapavan" << endl;
    Print_name_n_time(i + 1, n);
}

int sum_of_n(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum_of_n(n - 1) + n;
    }
}

int factorial_n(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorial_n(n - 1) * n;
    }
}

void Reverse_Array(int f, int arr[], int l)
{
    if (f >= l / 2)
    {
        return;
    }
    swap(arr[f], arr[l - f - 1]);
    Reverse_Array(f + 1, arr, l);
}

bool Palindrome(int i, string &s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[(s.size() - i - 1)])
    {
        return false;
    }
    return Palindrome(i + 1, s);
}

int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    int n = 6;
    // Print_Num_N_times(n);
    // Print_name_n_time(1, n);
    // Print_Num_N_times_Rev(n);
    // cout << sum_of_n(n);
    // cout << factorial_n(n) << endl;
    ////////////////////////////////////////
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // Reverse_Array(0, arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
    /////////////////////////////////////

    // string ch = "level";
    // cout << "status:" << Palindrome(0, ch);

    int a = 0;
    int b = 1;
    int c = 0;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << endl;

    cout << Fibonacci(n);

    return 0;
}
