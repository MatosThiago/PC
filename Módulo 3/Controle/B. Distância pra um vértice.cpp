#include <bits/stdc++.h>

using namespace std;

class Graph {

    private:

        vector<vector<int>> graph;

        int nodes;

    public:

        Graph(int n) : graph(n) {
            nodes = n;
        }

        int size() {
            return nodes;
        }
        void make_path(int a, int b) {
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        bool has_path(int a, int b) {
            return find(graph[a].begin(), graph[a].end(), b) != graph[a].end();
        }
        int degree(int v) {
            return graph[v].size();
        }
        vector<int> distance_from(int v) {
            vector<int> distance(nodes, -1);

            queue<int> qnow, qnext, qempty;
            vector<int> visited(nodes, false);
            qnow.push(v);

            int level = 0;

            while(true) {
                while(!qnow.empty()) {
                    v = qnow.front();
                    qnow.pop();

                    if(!visited[v]) {
                        distance[v] = level;
                    }

                    visited[v] = true;

                    for(int i:graph[v]) {
                        if(!visited[i]) {
                            qnext.push(i);
                        }
                    }
                }
                level++;

                if(qnow.empty() && qnext.empty()) {
                    break;
                }
                qnow = qnext;
                qnext = qempty;
            }

            return distance;
        }
};

int main() {

    int n, m, k, q;
    scanf("%d %d %d %d", &n, &m, &k, &q);
    n++;

    Graph G(n);

    for(auto i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        G.make_path(a, b);
    }

    vector<int> distance = G.distance_from(k);

    for(auto i = 0; i < q; i++) {
        int x;
        scanf("%d", &x);

        if(distance[x] == -1) {
            printf("infinito\n");
        } else {
            printf("%d\n", distance[x]);
        }
    }

    return 0;
}