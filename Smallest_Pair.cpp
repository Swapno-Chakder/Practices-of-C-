#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int A[100];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int smallest_sum = INT_MAX;

        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int current_sum = A[i] + A[j] + j - i;
                if (current_sum < smallest_sum)
                {
                    smallest_sum = current_sum;
                }
            }
        }

        cout << smallest_sum << endl;
    }

    return 0;
}