#include<iostream>
using namespace std;
static int t=0;
void binary(int a[],int element,int beg,int end)
{
    t++;

    if(beg>end)
    {
        cout<<"Not Present "<<t;
        return;
    }
    

    int mid=(beg+end)/2;

    if(a[mid]==element)
    {
        cout<<"Presend "<<t;
        return ;
    }
    else if(a[mid]>element)
    {
        binary(a,element,beg,mid-1);
    }
    else
    {
        binary(a,element,mid+1,end);
    }

    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,element;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        cin>>element;

        binary(a,element,0,n-1);
    }
    return 0;
    
}