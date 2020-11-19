#include<iostream>
using namespace std;
int a[110];
int main()
{
    int n,x,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(int i=1;i<110;i++)
    {
        sum+=a[i]/2;
        
    }
    cout<<sum<<endl;
    
}
