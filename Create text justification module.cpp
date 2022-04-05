#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int l;
    cin>>l;
    scanf("\n");
    string s;
    getline(cin ,s);
    unordered_map<string,int> a;
    vector<string> ans;
    vector<int> wor;
    int n=s.size();
    string k="";
    int w=0;
    for(int i=0;i<n;i++)
    {
        string temp="";
        while(i<n && s[i]!=' ')
        {
            temp=temp+s[i]; 
            i++;
        }
        int l1=k.size(),l2=temp.size();
        if(l1+l2<=l)
        {
            k=k+temp;
            k=k+' ';
            w++;
        }
        else
        {
            k.pop_back();
            ans.push_back(k);
            wor.push_back(w);
            w=1;
            k=temp;
            k=k+' ';
        }
    }
    k.pop_back();
     ans.push_back(k);
            wor.push_back(w);

    
    int m=ans.size();
   
    for(int i=0;i<m;i++)
    {
        int sz=ans[i].size();
        int q=wor[i];
        int r=l-sz;
        int sp=r/(q-1);
        int r1=r%(q-1);
        int h;
     
        for(int j=0;j<sz;j++)
        {
            while((j<sz)&& ans[i][j]!=' ')
            {
                cout<<ans[i][j];
                j++;
            }
            
            if(r1!=0)
            {
                h=sp+2;
                r1--;
            }
            else
            {
                h=sp+1;
            }
        
            for(int z=0;z<h;z++)
                cout<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
