#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C;
    char S, T;
    cin >> A >> S >> B >> T >> C;
    if (S == '+' && A + B == C)
    {
        cout << "Yes";
    }
    else if (S == '-' && A - B == C || B - A == C)
    {
        cout << "Yes";
    }
    else if (S == '*' && A * B == C)
    {
        cout << "Yes";
    }
    else
    {
        if (S == '+')
        {
            cout << A + B;
        }
        if (S == '-')
        {
            cout << A - B;
        }
        if (S == '*')
        {
            cout << A * B;
        }
    }

    return 0;
}