#include <iostream>
using namespace std;

void insertionSort(int *a, int n, int *cnt, int *s)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && key < a[j])
        {
            (*cnt)++;
            a[j + 1] = a[j];
            j--;
        }
        (*s)++;
        a[j + 1] = key;
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
        {
            cin >> a[i];
        }
        insertionSort(a, n, &cnt, &s);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << "Comparisons : " << cnt <<endl;
        cout   << "Shifts : " << cnt + s<<endl;
    }
    return 0;
}