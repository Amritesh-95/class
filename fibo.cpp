#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, i, a = 0, b = 1, c = 0;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << c << endl;
        a = b;
        b = c;
        c = a + b;
    }
}