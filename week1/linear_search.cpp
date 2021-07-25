#include<iostream>
using namespace std;
int main()
{
 int t;

 cin>>t;
 while(t--)
 {
     cout<<endl;
     int n,cnt=0;
     
     cin>>n;
     int a[n];
     
     for(int i=0;i<n;i++)
     cin>>a[i];

     int ele;
     
     cin>>ele;
     for(int i=0;i<n;i++)
     {
         if(a[i]==ele)
         {
             cnt++;
             cout<<"Present "<<i+1;
             break;
         }

     }
    if(!cnt)
    cout<<"Not Present "<<n;

 }
return 0;   
}