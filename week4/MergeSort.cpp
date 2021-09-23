#include <iostream>
using namespace std;

int merge(int *a, int s, int mid, int e)
{
    int i = s, j = mid + 1, k = s;
    int b[100], count = 0;
    while (i <= mid && j <= e)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
            count += ((mid + 1) - i);
        }
    }

    for (; i <= mid; i++)
        b[k++] = a[i];
    for (; j <= e; j++)
        b[k++] = a[j];

    for (int i = s; i <= e; i++)
    {
        a[i] = b[i];
    }
    return count;
}

int MergeSort(int a[], int s, int e)
{
    int count = 0;
    if (s < e)
    {
        int mid = (s + e) / 2;
        count += MergeSort(a, s, mid);
        count += MergeSort(a, mid + 1, e);
        count += merge(a, s, mid, e);
    }
    return count;
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

        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        cout << "Inversion count : " << MergeSort(a, 0, n - 1) 		<< endl;

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << endl;

    }

    return 0;
}