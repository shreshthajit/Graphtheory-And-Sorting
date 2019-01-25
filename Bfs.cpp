//this program is for count the distance from 0 to all other vertices......
///i think this is dijktras algo using bfs method...
///main bfs code is in geeks for geeks...

#include<bits/stdc++.h>
using namespace std;
int a[200][200], color[300], queue2[200], m ,dist[200];///a[] is for aftter poping up store into that array
int front = -1, rear = -1;

void enqueue(int n)
{
    if(front == -1)
    {
        front++;///rear is the elment after front element
        rear++;///f=0,r=0
        queue2[front] = n;
    }
    else
    {
        rear++;//f=0,r=1
        queue2[rear] = n;
    }
    return;
}
int dequeue()
{
    int top;
    if(front == rear)
    {
        top = queue2[front];
        front = rear = -1;
    }
    else
    {
        top = queue2[front];
        front++;///front is the front index of top...
    }
    return top;
}
void bfs(int n)
{
    int i;
    enqueue(n);
    while(front > -1 && rear > -1)
    {
        n = dequeue();///here n=top returned from dequeue
        cout<<n<<" ";
        color[n] = 1;
        for(i=0 ;i<m; i++)
        {
            if(a[n][i] == 1 && color[i] == 0)
            {
                color[i] = 1;
                enqueue(i);
                dist[i] = dist[n]+1;
            }
        }
    }
    cout<<endl;
}
int main()
{
    int i,j,n,p,q,x;
    cin >> m >> n;///m is vertices....n is edges
    for(i=0;i<n;i++)
    {
        cin >> p >> q;
        a[p][q] = 1;
        a[q][p] = 1;
    }
    bfs(4);///void funtion so it is 0;
    for(i=0;i<m;i++)
    cout << "Dist " << dist[i] << endl;
    return 0;
}
 
//this program is for count the minimum distance from 0 to all other vertices;
///input vertices edge
///6 8
///0 1
///0 2
///1 3
///1 4
///2 4
///3 4
///3 5
///4 5






