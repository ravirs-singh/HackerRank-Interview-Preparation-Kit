#include<iostream>
using namespace std;

int main()
{
    int n,d,temp;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }   

    while(d>0)
    {
        temp=a[0];
   
   for(int i=0;i<n-1;i++)
   {
      
      a[i]=a[i+1];
      
   }
   a[n-1]=temp;
   d--;

    }

for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }  

}

