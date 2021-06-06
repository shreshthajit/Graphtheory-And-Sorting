#https://codeforces.com/contest/500/problem/A
---------------------------------
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100000;
vector<int>graph[MAXN];
double ans=0.0;
bool vis[MAXN];
void dfs(int at)
{
   vis[at]=true;
    for(int child:graph[at])
    {
        if(!vis[child])
            dfs(child);
    }
}
int main()
{
    int n,dest;
    memset(vis,false,sizeof(vis));
    cin>>n>>dest;
    int a,b;
    for(int i=1; i<n; i++)
    {
        cin>>a;
        graph[i].push_back(i+a); 
    }
    dfs(1);
    if(vis[dest]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

