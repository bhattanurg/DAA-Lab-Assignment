#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *a, int n, int *cnt, int *s)
{
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX, idx;
        for (int j = i; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                idx = j;
            }
            (*cnt)++;
        }
        swap(a[i], a[idx]);
        (*s)++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int cnt = 0, s = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        selectionSort(a, n, &cnt, &s);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << "comparisons : " << cnt - s << endl
             << "swaps : " << s - 1 << endl;
    }
    return 0;
}