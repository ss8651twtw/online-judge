#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        bool my[1000005] = {0};
        int p, q, ans = 0;
        scanf("%d%d", &p, &q);
        p *= 10;
        while(!my[p]){
            my[p] = 1;
            p %= q;
            p *= 10;
            ans++;
        }
        printf("%d\n", ans);
    }
}