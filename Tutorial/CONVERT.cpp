#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1 ; i <= n ; i++)
    {
        double num;
        string kind;
        // cin.ignore(INT_MAX, '\n');
        cin >> num;
        cin.ignore();
        getline(cin, kind,'\n');

        // cout <<"i: " << i << '\n';
        cout << fixed;
        cout.precision(4);

        if (kind == "kg")
            cout << i << ' ' << num * 2.2046 << ' ' << "lb" << '\n';
        else if (kind == "lb")
            cout << i << ' ' << num * 0.4536 << ' ' << "kg" << '\n';
        else if (kind == "l")
            cout << i << ' ' << num * 0.2642 << ' ' << "g" << '\n';
        else if (kind == "g")
            cout << i << ' ' << num * 3.7854 << ' ' << "l" << '\n';
    }
}