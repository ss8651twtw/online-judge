#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
LL s[1000005];
int main(){
    int n, q;
    scanf("%d%d", &n, &q);
    s[0] = 0;
    for(int i = 1; i <= n; i++){
        LL tmp;
        scanf("%lld", &tmp);
        s[i] = s[i - 1] + tmp * (i & 1 ? 1 : -1);
    }
    while(q--){
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%lld\n", (s[r] - s[l - 1]) * (l & 1 ? 1 : -1));
    }
}
