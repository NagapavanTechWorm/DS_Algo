#include <bits/stdc++.h>
using namespace std;

void square(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void RightAngleTriganleStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void RightAngleTriganleNum(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void RightAngleTriganleWithRowNum(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

void RevRightAngleTri(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void RevRightAngleTriNum(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void PyTri(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void RevPyTri(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < ((2 * n) - (2 * i) - 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void Rhombus(int n)
{
    PyTri(n);
    RevPyTri(n);
}

void symRom(int n)
{
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        int star = i;
        if (i > n)
        {
            star = (2 * n - i);
        }

        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void p11(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;

        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void p12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= ((2 * n) - (2 * i)); j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void p13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void p14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void p15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + (n - i + 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void p16(int n)
{
    for (char i = 'A'; i < 'A' + n; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void p17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= (n - i - 1); j++)
        {
            cout << " ";
        }

        char al = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= (2 * i + 1); j++)
        {
            cout << al;
            if (j <= breakpoint)
                al++;
            else
                al--;
        }
        for (int j = 0; j <= (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void p18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << (n - j);
        }
        cout << endl;
    }
}

void p19(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void p20(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }
    space = 8;
    // space = 2*n - 2
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        space -= 2;
        cout << endl;
    }
}

void p21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < ((2 * n) - (2 * i)); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int space = 2;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }
}

void p22(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;

    // square(n);
    // RightAngleTriganleStar(n);
    // RightAngleTriganleNum(n);
    // RevRightAngleTri(n);
    // RevRightAngleTriNum(n);
    // PyTri(n);
    // RevPyTri(n);
    // Rhombus(n);
    // symRom(n);
    // p11(n);
    // p12(n);
    // p13(n);
    // p14(n);
    // p15(n);
    // p16(n);
    // p17(n);
    // p18(n);
    // p19(n);
    // p20(n);
    // p21(n);
    p22(n);
    return 0;
}