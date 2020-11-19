#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],sum=0,count=0;
    string path;
    cin>>path;

    for(int i=0;i<n;i++)
    {
        if(path[i]=='U')
        a[i]=1;
        else
        a[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==-1 && a[i]==-1)
        {
            count++;
        
        }

    }
    cout<<count;
}


