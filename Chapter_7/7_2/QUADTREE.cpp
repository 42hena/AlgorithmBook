#include <iostream>
// #include <string>
using namespace std;
 
string reverse(string::iterator& it)
{
    char head = *it;
    ++it;
    if (head == 'b' || head == 'w')
        return (string(1, head));
    string upperLeft = reverse(it);
    string upperRight = reverse(it);
    string lowerLeft = reverse(it);
    string lowerRight = reverse(it);
    return (string("x") + lowerLeft + lowerRight + upperLeft + upperRight);
}


int main(void)
{
    cin.sync_with_stdio(false);
 
    int T;
    cin >> T;
    while (T--)
    {
        string input;
        cin >> input;
        string output;
        string::iterator it = input.begin();
        output = reverse(it);
        cout << output << endl;
    }
    return (0);
}
