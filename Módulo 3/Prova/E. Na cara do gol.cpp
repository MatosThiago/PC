#include <bits/stdc++.h>

using namespace std;

class Graph {

    private:

        vector<vector<pair<int, int>>> graph;

        int nodes;

    public:

        Graph(int n) : graph(n) {
            nodes = n;
        }

        int size() {
            return nodes;
        }
        void make_path(int a, int pa, int b, int pb) {
            graph[a].emplace_back(b, pb);
            graph[b].emplace_back(a, pa);
        }
        bool has_path(int a, int b) {
            auto it = lower_bound(graph[a].begin(), graph[a].end(), make_pair(b, 0));

            if(it == graph[a].end())
                return false;
            return true;
        }
        // int seconds_between_vertices(int a, int b) {
        //     int seconds = 0;

        //     if(a != b) {
        //         queue<int> qnow, qnext, qempty;
        //         vector<bool> visited(nodes, false);

        //         qnow.push(a);

        //         while(true) {
        //             bool path = false;
        //             while(!qnow.empty()) {
        //                 a = qnow.front();
        //                 qnow.pop();
        //                 visited[a] = true;

        //                 if(has_path(a, b)) {
        //                     path = true;
        //                 }

        //                 for(int i:graph[a]) {
        //                     if(!visited[i]) {
        //                         qnext.push(i);
        //                     }
        //                 }
        //             }
        //             distance++;

        //             if(path) {
        //                 break;
        //             }

        //             if(qnow.empty() && qnext.empty()) {
        //                 distance = -1;
        //                 break;
        //             }
        //             qnow = qnext;
        //             qnext = qempty;
        //         }
        //     }

        //     return seconds;
        // }
};

int main() {

    int n, m;
    scanf("%d %d", &n, &m);
    char c;
    scanf("%c", &c);

    int M[n][m] = {};

    for(auto i = 0; i < n; i++) {
        for(auto j = 0; j < m; j++) {
            scanf("%c", &c);

            if(c == '.') {
                M[i][j] = 1;
            } else if(c == 'A') {
                M[i][j] = 5;
            }
        }
        scanf("%c", &c);
    }

    Graph G(n * m);

    n--;
    m--;
    for(auto i = 0; i < n; i++) {
        for(auto j = 0; j < m; j++) {
            if(i == 0) {
                if(j == 0) {
                    
                } else if(j == n) {
                    
                } else {
                    
                }
            } else if(i == n) {
                if(j == 0) {

                } else if(j == n) {
                    
                } else {
                    
                }
            } else {
                if(j == 0) {

                } else if(j == n) {
                    
                } else {
                    
                }
            }
        }
    }

    return 0;
}