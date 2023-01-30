#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int arr1[a];
    int sum = 0;
    int count = 0;
    for(int i=0;i<a;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            sum=arr1[i]+arr1[j];
            if(i!=j)
            {
                if(sum%b==0 && sum>=b)
                {
                    count++;
                }
            }
        }
    }
    count=count/2;
    cout<<count<<endl;
    return 0;
}
