#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j,n,m,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
    cin>>n;
    if(n<38)
    cout<<n<<endl;
    else
    {
    j=n%5;
    if(j<3)
    cout<<n<<endl;
    else 
    {
        n=n+5-j;
        cout<<n<<endl;
    }    
    }
    }
    return 0;
}
