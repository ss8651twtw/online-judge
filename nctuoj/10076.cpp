#include <bits/stdc++.h>
using namespace std;
struct node{
    int col, ord;
    node(int c = 0, int o = 0){
        col = c;
        ord = o;
    }
    bool operator<(const node& x)const{
        return ord < x.ord;
    }
};
node no[3][1000005];
int main(){
    int n, q;
    scanf("%d%d", &n, &q);
    for(int i = 1; i <= q; i++){
        int mod, x, y, z;
        scanf("%d%d%d%d", &mod, &x, &y, &z);
        if(mod == 1){
            int col, pla;
            scanf("%d%d", &col, &pla);
            node n(col, i);
            switch(pla){
                case 0:no[2][z] = n;break;
                case 1:no[1][y] = n;break;
                case 2:no[0][x] = n;break;
            }
        }
        else printf("%d\n", max(no[0][x], max(no[1][y], no[2][z])).col);
    }
}
