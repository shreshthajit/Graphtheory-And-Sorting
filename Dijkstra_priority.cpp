#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
 
#define MAX 100001
#define INF (1<<20)
#define pii pair< int, int >
#define pb(x) push_back(x)
 
struct comp
 {
    bool operator() (const pii a, const pii b) 
	{
        return a.second > b.second;
    }
};




 
priority_queue< pii, vector< pii >, comp > Q;

vector< pii > G[MAX];
int D[MAX];
bool F[MAX];

int main() 
{
    int i, u, v, w, sz, nodes, edges, starting;
    // create graph
    scanf("%d %d", &nodes, &edges);
    
    for(i=0; i<edges; i++)
	 {
        scanf("%d %d %d", &u, &v, &w);
        G[u].pb(pii(v, w));
        G[v].pb(pii(u, w)); // for undirected
     }
    
    //scanf("%d", &starting);
     starting=1;
    // initialize distance vector
    for(i=1; i<=nodes; i++) D[i] = INF;
    D[starting] = 0;
    Q.push(pii(starting, 0));
 
 
 

    // dijkstra
    while(!Q.empty()){
        u = Q.top().first;
        
        Q.pop();
        
        cout<<F[u]<<endl;
        if(F[u]) continue;//if(f[u]=false;        
        
        sz = G[u].size();
        for(i=0; i<sz; i++)
		 {
            v = G[u][i].first;
            w = G[u][i].second;
            if(!F[v] && D[u]+w < D[v]) 
		{
                D[v] = D[u] + w;
                Q.push(pii(v, D[v]));
        }
        
        }
        F[u] = 1; // done with u
    }
 
    // result
    for(i=1; i<=nodes; i++) printf("Node %d, min weight = %d\n", i, D[i]);
    return 0;
}

/*
if ( x )

is equivalent to

if ( x != 0 )
*/


/*continue statement

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        if ( i == 6 || i == 9)
        {
            continue;
        }
        cout << i << "\t";
    }
    return 0;
}
Output

1	2	3	4	5      7	8	10
*/
