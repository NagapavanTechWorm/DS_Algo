#include <bits/stdc++.h>
using namespace std;

void NumberExtraction(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        cout << digit << endl;
        num = num / 10;
    }
}

void countDigit(int num)
{
    // int count = 0;
    // while (num > 0)
    // {
    //     num = num / 10;
    //     count++;
    // }
    int logCount = (int)(log10(num) + 1);
    cout << "count: " << logCount;
}

void ReverseNum(int num)
{
    int revNum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        num = num / 10;
        revNum = (revNum * 10) + digit;
    }
    cout << "Reverse Number:" << revNum << endl;
}

void Palindrome(int num)
{
    int revNum = 0;
    int oriNum = num;
    while (num > 0)
    {
        int digit = num % 10;
        num = num / 10;
        revNum = (revNum * 10) + digit;
    }
    if (revNum == oriNum)
    {
        cout << "Its is Palindrome";
    }
    else
    {
        cout << "Its not palindrome";
    }
}

void ArmstrongNum(int num)
{
    int armNum = 0;
    int oriNum = num;
    int count = (int)(log10(num) + 1);
    while (num > 0)
    {
        int digit = num % 10;
        num = num / 10;
        armNum = armNum + pow(digit, count);
    }
    if (armNum == oriNum)
    {
        cout << "Its is armstrong";
    }
    else
    {
        cout << "Its not armstrong";
    }
    {
    }
}

void PrintAllDivisible(int num)
{
    vector<int> n;
    for (int i = 1; i <= sqrt(num); i++) // for (int i = 1; i*i<n; i++)
    {
        if (num % i == 0)
        {
            // cout << i << endl;
            n.push_back(i);
        }
        if (num / i != 0)
        {
            // cout << (num / i) << endl;
            n.push_back(num / i);
        }
    }
    sort(n.begin(), n.end());
    for (auto i : n)
    {
        cout << i << endl;
    }
}

void PrimeNum(int num)
{
    int count = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
        else
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}

void GDC_HDF()
{
    int n1 = 20;
    int n2 = 40;
    int gdc_hcf = 0;
    int mini = min(n1, n2);
    for (int i = 1; i <= mini; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gdc_hcf = i;
        }
    }
    cout << "HCF: " << gdc_hcf;
}

void Euclidean()
{
    int a = 52, b = 10;
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        cout << b;
    }
    else
    {
        cout << a;
    }
}

int main()
{
    int num = 5;

    // NumberExtraction(num);
    // countDigit(num);
    // ReverseNum(num);
    // Palindrome(num);
    // ArmstrongNum(num);
    // PrintAllDivisible(num);
    // PrimeNum(num);
    // GDC_HDF();
    Euclidean();

    return 0;
}