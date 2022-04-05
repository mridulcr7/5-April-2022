#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n,p,ans=0;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    p=a[0];
    for(int i=0;i<n;i++)
    {
        if(p>a[i])
            ans=ans+p-a[i];
        else
            p=a[i];
    }
    cout<<ans<<"\n";
    return 0;
}
