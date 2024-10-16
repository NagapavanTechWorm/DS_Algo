#include <bits/stdc++.h>
using namespace std;

void Number_hash()
{
    int hash[15] = {0};
    int n;

    cout << "Enter n:" << endl;
    cin >> n;
    int arr[n];
    cout << "enter " << n << " numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    cout << "Enter to find count" << endl;
    int j;
    cin >> j;
    cout << "count of:" << j << ":" << hash[j] << endl;
}

void Ch_Hashing()
{
    string str = "nagapavan";
    int Hash[26] = {0};

    for (int i = 0; i < str.size(); i++)
    {
        Hash[str[i] - 'a']++;
    }

    cout << "Enter to find count" << endl;
    char j;
    cin >> j;
    cout << "count of:" << j << ":" << Hash[j - 'a'] << endl;
}

void Using_Map()
{
    int n;
    unordered_map<int, int> mp;
    cout << "Enter n:" << endl;
    cin >> n;
    int arr[n];
    cout << "enter " << n << " numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for (auto i : mp)
    {
        cout << i.first << "-->" << i.second << endl;
    }
}

int main()
{
    // Number_hash();
    // Ch_Hashing();
    Using_Map();
    return 0;
}