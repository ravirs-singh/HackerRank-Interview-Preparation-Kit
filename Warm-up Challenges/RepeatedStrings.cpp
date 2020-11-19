#include<iostream>
#include<string>
#include <cstring>
using namespace std;

int main()
{

    string test;
    cin>>test;
    int len=test.size();
    unsigned long long int n,x,count=0,total;
    cin>>n;

        x=(n/len);

    for(int i=0;i<len;i++)
    {
        if(test[i]=='a')
        count++;
    }
   total=x*count;


    for(int i=0;i<n%len;i++)
    {
        if(test[i]=='a')
        total++;
    }
    cout<<total;
}
