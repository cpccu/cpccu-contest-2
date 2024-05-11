#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k;
cin>>n>>k;
int maxi=0;
int a[n],b[n];
for(int i=0;i<n;i++)
{
   cin>>a[i];
}
for(int i=0;i<n;i++)
{
    cin>>b[i];
   maxi=max(b[i],maxi);
   b[i]=maxi;
  
}
int max2=0;
int sum=0;
int j=min(n,k);
for(int i=0;i<j;i++)
{
   
   sum+=a[i];
   //cout<<sum<<endl;
   max2=max(max2,sum+(k-i-1)*b[i]);
   
   
}
cout<<max2<<endl;


}
}