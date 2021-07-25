#include<iostream>
using namespace std;
int main()
{
 int t;
 cout<<"enter no of test cases ";
 cin>>t;
 while(t--)
 {
     cout<<endl;
     int n,cnt=0;
     cout<<"enter the no of elements ";
     cin>>n;
     int a[n];
     cout<<"enput each elemet ";
     for(int i=0;i<n;i++)
     cin>>a[i];

     int ele;
     cout<<"enter the element to be found ";
     cin>>ele;
     for(int i=0;i<n;i++)
     {
         if(a[i]==ele)
         {
             cnt++;
             cout<<"element fount \n Comparisons ="<<i+1;
             break;
         }

     }
    if(!cnt)
    cout<<"not found \n Comparisons ="<<n;

    return 0;


 }   
}