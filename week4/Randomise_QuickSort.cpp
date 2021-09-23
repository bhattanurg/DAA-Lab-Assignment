#include <bits/stdc++.h>
using namespace std;

int partition(int *a,int s,int e)
{
    int i=s-1;
    int j=s;
    int pivot=a[e];
    for(;j<=e-1;)
    {
        if(a[j]<=pivot)
        {
            i=i+1;
            swap(a[i],a[j]);
        }
        j=j+1;
    }
    swap(a[i+1],a[e]);

    return i+1;

}

int partition_random(int arr[], int low, int high)
{
    srand(time(NULL));
    int random = low + rand() % (high - low);
    swap(arr[random], arr[low]);
    return partition(arr, low, high);
}

void QuickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int p = partition_random(a, low, high);
        QuickSort(a, low, p);
        QuickSort(a, p + 1, high);
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

        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        QuickSort(a, 0, n);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        
        cout << endl;
    }
    return 0;
}
