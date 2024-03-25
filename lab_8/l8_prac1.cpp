// Find the shortest distance from an arbitrary source to all the nodes.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> adj[100];
int visited[100], dis[100];

void BFS(int src) {
    vector<int> bfs;
    queue<int> temp;
    visited[src] = 1;
    dis[src] = 0;
    temp.push(src);

    while (!temp.empty()) {
        int node = temp.front();
        temp.pop();

        for (auto it : adj[node]) {
            int nxt = it;
            if (!visited[nxt]) {
                visited[nxt] = 1;
                dis[nxt] = 1 + dis[node];
                temp.push(nxt);
            }
        }
    }

}

int main() {
    int m, s, edge, node, src;
    cout << "number of node: ";
    cin >> node;
    cout << "number of edges: ";
    cin >> edge;

    cout << "give edge connections "<<endl;
    for (int i = 0; i < edge; i++) {
        cin >> m >> s;
        adj[m].push_back(s);
        adj[s].push_back(m);
    }

    cout << "source node: ";
    cin >> src;

    BFS(src);
    cout <<"shortest distance list"<<endl;

    for (int j =0 ; j < node ; j++) {
        cout <<"to "<< j << "   = "<<dis[j]<<endl;
    }
    return 0;
}
