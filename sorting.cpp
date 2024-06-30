#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int N;

    cin >> N;

    int *A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // Sorting the array
    sort(A, A + N);

    // Printing the sorted array
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    // Freeing dynamically allocated memory
    delete[] A;

    return 0;
}