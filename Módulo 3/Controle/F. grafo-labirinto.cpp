#include <bits/stdc++.h>

using namespace std;

int main() {

    int w, h, q;
    scanf("%d %d %d", &w, &h, &q);
    char c;
    scanf("%c", &c);

    int M[h][w] = {};

    for(auto i = 0; i < h; i++) {
        for(auto j = 0; j < w; j++) {
            scanf("%c", &c);

            if(c == '.') {
                M[i][j] = 1;
            }
        }
        scanf("%c", &c);
    }

    return 0;
}