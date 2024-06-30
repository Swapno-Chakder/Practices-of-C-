#include <bits/stdc++.h>
using namespace std;
int Palindrome(int A[], int N)
{
    int left = 0;
    int right = N - 1;

    while (left < right)
    {
        if (A[left] != A[right])
        {
            return 0;
        }
        left++;
        right--;
    }

    return 1;
}

int main()
{
    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    int result = Palindrome(A, N);

    if (result == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
