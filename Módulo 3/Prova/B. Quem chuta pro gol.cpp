#include <bits/stdc++.h>

using namespace std;

class Graph {

    private:

        vector<vector<int>> graph;
        vector<int> input;

        int nodes;

    public:

        Graph(int n) : graph(n), input(n, 0) {
            nodes = n;
        }

        int size() {
            return nodes;
        }
        void make_path(int a, int b) {
            graph[a].push_back(b);
            input[b]++;
        }
        int input_degree(int v) {
            return input[v];
        }
        int output_degree(int v) {
            return graph[v].size();
        }
};

int main() {

    int n, m;
    scanf("%d %d", &n, &m);
    n++;

    Graph G(n);

    for(auto i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        G.make_path(x, y);
    }

    for(auto i = 1; i < n; i++) {
        if(G.output_degree(i) == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}