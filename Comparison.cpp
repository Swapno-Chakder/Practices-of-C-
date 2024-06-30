#include <bits/stdc++.h>
using namespace std;
int main()
{

    int A, B;
    char S;

    cin >> A >> S >> B;

    // Determine the result based on the comparison symbol S
    if (S == '<' && B > A)
    {
        cout << "Right";
    }
    else if (S == '>' && A > B)
    {
        cout << "Right";
    }
    else if (S == '=' && A == B)
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }

    return 0;
}
