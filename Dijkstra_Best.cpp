#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
 
#define MAX 100100
#define INF  100000000000000
#define pii pair< int, int >
#define pb(x) push_back(x)
 
long long nodes;
struct comp
{
    bool operator()(const pii a, const pii b) 
	{
        return a.second > b.second;
    }
};

priority_queue< pii, vector< pii >, comp > Q;

vector< pii > G[MAX];
long long D[MAX];
bool F[MAX];

void printPath(long long parent[], long long  j) 
{  
    // Base Case : If j is source 
    if (parent[j] == - 1) 
        return; 
  
    printPath(parent, parent[j]); 
    
    printf("%lld ", j); 
}









int main()
{
    long long  i, u, v, w, sz, edges, starting,parent[200010];
    // create graph
    scanf("%lld %lld", &nodes, &edges);
    
    for(i=0; i<edges; i++)
	 {
        scanf("%lld %lld %lld", &u, &v, &w);
        G[u].pb(pii(v, w));
        G[v].pb(pii(u, w)); // for undirected
     }
    //scanf("%d", &starting);
     starting=1;
    // initialize distance vector
    for(i=1; i<=nodes; i++)
    {
    	parent[i]=-1;
	    D[i] = INF;
    }
    D[starting] = 0;
    Q.push(pii(starting, 0));
 

    // dijkstra
    while(!Q.empty()){
        u = Q.top().first;
        
        Q.pop();
        if(F[u]) continue;//if(f[u]=true;        
        
        sz = G[u].size();
        
        for(i=0; i<sz; i++)
		 {
            v = G[u][i].first;
            w = G[u][i].second;
            
            if(!F[v] && D[u]+w < D[v]) 
		     {
                D[v] = D[u] + w;
                parent[v] = u; 
                
                Q.push(pii(v, D[v]));
             }
        }
        F[u] = 1; // done with u
    }
    
     
    // result
    
    
    
    /*for(i=1; i<=nodes; i++)
    {
	 //printf("Node %d, min weight = %d", i, D[i]);
	 cout<<1<<" ";
	   printPath(parent, i); 
	   cout<<endl;
   }*/
     
     if(D[nodes]<INF)
     {
       cout<<1<<" ";
	   printPath(parent,nodes); 
     }
     else
     {
     	cout<<-1<<endl;
	 }
    return 0;
}