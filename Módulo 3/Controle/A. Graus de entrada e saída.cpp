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

        void make_path(int a, int b) {
            graph[a].push_back(b);
            input[b]++;
        }
        bool has_path(int a, int b) {
            return find(graph[a].begin(), graph[a].end(), b) != graph[a].end();
        }
        int input_degree(int v) {
            return input[v];
        }
        int output_degree(int v) {
            return graph[v].size();
        }
        int size() {
            return nodes;
        }
};

int main() {

    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);
    n++;

    Graph G(n);

    for(int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        G.make_path(a, b);
    }

    for(int i = 0; i < q; i++) {
        int t, x;
        scanf("%d %d", &t, &x);
        
        if(t == 1) {
            printf("%d\n", G.output_degree(x));
        } else {
            printf("%d\n", G.input_degree(x));   
        }
    }

    return 0;
}