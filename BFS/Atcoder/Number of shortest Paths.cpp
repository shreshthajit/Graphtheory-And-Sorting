#https://atcoder.jp/contests/abc211/tasks/abc211_d


#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    vector<vector<int> > g(N+1);
    vector<int>dist(N+1,1e9);
    vector<int>pathCount(N+1,0);
    for (int i = 0; i < M; i++)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    pathCount[1]=1;
    dist[1]=0;

    while(!q.empty())
    {
        int i = q.front();
        q.pop();

        for(int v:g[i])
        {
            if(dist[v]>dist[i]+1)
            {
                dist[v]=dist[i]+1;
                pathCount[v]=pathCount[i];
                q.push(v);
            }
            else if(dist[v]==dist[i]+1)
            {
                pathCount[v]=(pathCount[v]+pathCount[i])%mod;

            }
        }
    }
    printf("%d", pathCount[N]);
    return 0;
}
