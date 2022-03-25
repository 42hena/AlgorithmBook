#include <bits/stdc++.h>
using namespace std;
string tree;
string recursive(int index)
{
    string first = "";
    string second = "";
    string third = "";
    string fourth = "";

    if (tree[index] == 'x')  // first
    {
        first = 'x' + recursive(index + 1);
    }
    else
        first = tree[index];
    if (tree[index + first.size()] == 'x')  // first
    {
        second = 'x' + recursive(index + 1 + first.size());
    }
    else
        second = tree[index + first.size()];

    if (tree[index + first.size() + second.size()] == 'x')  // first
    {
        third = 'x' + recursive(index + 1 + first.size() + second.size());
    }
    else
        third = tree[index + first.size() + second.size()];

    if (tree[index + first.size() + second.size() + third.size()] == 'x')  // first
    {
        fourth = 'x' + recursive(index + 1 + first.size() + second.size() + third.size());
    }
    else
        fourth = tree[index + first.size() + second.size() + third.size()];

    return third + fourth + first + second;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        cin >> tree;
        if (tree[0] == 'x')
        {
            string tmp = 'x' + recursive(1);
            cout << tmp << '\n';
        }
        else
        {
            cout << tree << '\n';
        }
    }
}