#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    //cout<<a<<" "<<b<<endl;
    int temp=b;
    b=a;
    a=temp;
    //cout<<a<<" "<<b<<endl;
}


int findmin(int a[],int n)
{
    int count=0,t;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=i+1)
        {
            t=i;
            while(a[t]!=i+1)
            {t++;}

            swap(a[t],a[i]);
            count++;
        }
    }
    return count;
}


int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int swap = findmin(a,n);
    cout<<swap;
}

