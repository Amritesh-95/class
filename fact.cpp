#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f = 1, i = 1, n;

    cin >> n;

    for (; i <= n; i++)
    {
        f = f * i;
    }
    cout << f;
}