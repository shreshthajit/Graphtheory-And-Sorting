
#https://codeforces.com/contest/839/problem/C

*Given a tree with N nodes and N-1 edges
*1<=N<=100000
*A journey starts at node 1 and ends at left node
*Randomly decide which next node to go
*Don't go backwards
*Output the expected length of the journey give that each edge has a length of 1
----------------------------------------
WHAT IS EXPECTED LENGTH?
*Weighted average length
*The higher the probabilty of reaching a length the more that weight that length has in average
*sum of (length of i x probability) to all leaf nodes i
1-2
1-3
2-4
so probabilty of reaching node 2 and 3 is 1/2=.5
and probabilty of reaching node 4 is .5 because we can always reach node 4
but if 2 had two child 4 and 5 then probabilty would have been .5/2
because in every child node the reaching probabilty is equal.
  
*For every lealf node we need the length from root node
*The length from the root node is the depth
*depth[0]=0
*If the probabilty of reaching node i is x and node i has y children the probabilty of reaching those children is x/y
-----------------------------------------------------------------------------------
RUNTIME
*We only search each node once(N)
*We only look at each edge once(O(edges))
*Runtime is N
---------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100000;
vector<int>graph[MAXN];
double ans=0.0;
void dfs(int at,int parent,double probabilty,int depth)
{
    int below=0;
    for(auto it:graph[at])
    {
        if(it!=parent)
        {
            below++;
        }
    }
    for(int child:graph[at])
    {
        if(child!=parent)
        {
            dfs(child,at,probabilty/below,depth+1);
        }
    }
    if(below==0)
    {
        ans=ans+probabilty*depth;
    }
}
int main()
{
    int n;
    cin>>n;
    int a,b;
    for(int i=0; i<n-1; i++)
    {
        cin>>a>>b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(0,0,1.0,0);
    cout<<fixed<<setprecision(7)<<ans<<endl;
}
