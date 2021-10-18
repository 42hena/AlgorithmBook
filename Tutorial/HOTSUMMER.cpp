#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
vector<int> v;
int main()
{
    int t;
    cin >> t;
    for (int i = 0 ; i < t ; i++)
    {
        int w;
        cin >> w;
        int num;
        for (int j = 0 ; j < 9 ; j++)
        {
            cin >> num;
            v.push_back(num);
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        if (w >= sum)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        v.clear();
    }
}