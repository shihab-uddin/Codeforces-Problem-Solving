#include<bits/stdc++.h>
#define PAIR pair<unsigned long long int , unsigned long long int>
#define INF 1000000000000000000
typedef unsigned long long ULL;
using namespace std;

ULL n, m, a, b, w, src = 1;
vector<vector<PAIR > > adjList(1000005);
priority_queue<PAIR > pq;

vector<ULL> parent;
vector<ULL> dist;

void pathFind(ULL dst){
    if(dst == src){
        cout<<src;
        return;
    }
    pathFind(parent[dst]);
    cout<<" "<<dst;
}

void dijkstra(ULL source){
    dist[source] = 0;
    pq.push(make_pair(-0, -source));

    while(!pq.empty()){
        pair<ULL, ULL> frnt;
        frnt = pq.top();
        pq.pop();
        ULL distance, u;
        distance = -frnt.first, u = -frnt.second;

        if(distance > dist[u]){
            continue;
        }
        for(ULL i = 0; i < adjList[u].size(); i++){
            PAIR v = adjList[u][i];
            if(dist[u] + v.second < dist[v.first]){
                dist[v.first] = dist[u] + v.second;
                parent[v.first] = u;
                pq.push(make_pair(-dist[v.first], -v.first));
            }
        }
    }
}

int main(){

    cin>>n>>m;

    for(ULL i = 0; i < m; i++){
        cin>>a>>b>>w;
        adjList[a].push_back(make_pair(b, w));
        adjList[b].push_back(make_pair(a, w));
    }

    parent.assign(n+1, -1);
    dist.assign(n+1, INF);

    dist[n] = -1;
    dijkstra(src);

    if(dist[n] == -1){
        cout<<-1;
    }else{
        pathFind(n);
    }

    return 0;
}


