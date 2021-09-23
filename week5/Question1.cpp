#include <iostream>
using namespace std;

void solve(char arr[], int n, int &big, char &ans)
{
    int cnt[26] = {0};

    for (int i = 0; i < n; i++)
    {
        cnt[arr[i] - 'a']++;
        if (big < cnt[arr[i] - 'a'])
        {
            big = cnt[arr[i] - 'a'];
            ans = arr[i];
        }
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
        char arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        int big = INT_MIN;
        char ans;

        solve(arr, n, big, ans);

        if (big > 1)
            cout << ans << " -> " << big;
        else
            cout << "Duplicates Not Present";

        cout << "\n";
    }
return 0;
}