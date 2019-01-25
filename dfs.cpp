
#include <bits/stdc++.h>

using namespace std;

#define SZ 100

vector <int>graph[SZ];
bool visited[SZ];
int deg[SZ];
int l=0;




void DFS(int now)
{
    visited [now] = true;
    printf("Now VIsiting %d\n",now);

    int i,to,k,l;
    k = graph[now].size();
    if(k>1)
    {
    l++;
    }
    printf("degree %d:\n",k);
    for(i =0; i<k; i++)
    {
        to = graph[now][i];
        if(visited[to] == false)
        {
            DFS(to);
        }
    }
    return;
}




int main()
{
    int vertics,edges,from,to,i;
    while(scanf("%d %d",&vertics,&edges))
    {
        for ( i = 0; i< vertics; i++)
        {
            graph[i].clear();
            visited[i] = false;
        }
        
        
        
        
        
        
        for(i = 0; i < edges; i++)
        {
            scanf("%d %d",&from,&to);
            graph[from].push_back(to);
            graph[to].push_back(from);
        }
        
        
        
        
        
        
        for (i =0; i < vertics; i++)
        {
            if(visited[i] == false)
            {
                printf("root ----->>>> %d\n",i);
                DFS(i);
            }
        }
        if(l==vertics)
        {
        	printf("YES");
        }
        else
        {
        	printf("NO");
		}
    }
    return 0;
}
/*
6 8
1 3
1 2
2 4
2 5
3 5
4 5
4 6
5 6
*/

