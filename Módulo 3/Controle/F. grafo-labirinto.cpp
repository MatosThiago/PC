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
        bool has_path(int a, int b) {
            return find(graph[a].begin(), graph[a].end(), b) != graph[a].end();
        }
        int input_degree(int v) {
            return input[v];
        }
        int output_degree(int v) {
            return graph[v].size();
        }
        int distance_between_vertices(int a, int b) {
            int distance = 0;

            if(a != b) {
                queue<int> qnow, qnext, qempty;
                vector<int> visited(nodes, false);

                qnow.push(a);

                while(true) {
                    bool path = false;
                    while(!qnow.empty()) {
                        a = qnow.front();
                        qnow.pop();
                        visited[a] = true;

                        if(has_path(a, b)) {
                            path = true;
                        }

                        for(int i:graph[a]) {
                            if(!visited[i]) {
                                qnext.push(i);
                            }
                        }
                    }
                    distance++;

                    if(path) {
                        break;
                    }

                    if(qnow.empty() && qnext.empty()) {
                        distance = -1;
                        break;
                    }
                    qnow = qnext;
                    qnext = qempty;
                }
            }

            return distance;
        }
};

int main() {

    int w, h, q;
    scanf("%d %d %d", &w, &h, &q);

    Graph G(w);

    for(auto i = 0; i < h; i++) {
        for(auto j = 0; j < w; j++) {
            char c;
            cin >> c;
            cin.ignore();

            if(c == '.') {
                if(!G.has_path(i, j)) {
                    G.make_path(i, j);
                }
            }
        }
    }

    for(auto i = 0; i < q; i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        printf("%d\n", G.distance_between_vertices(x1, x2));
    }

    return 0;
}