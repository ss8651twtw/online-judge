#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,i;
        scanf("%d%d",&n,&m);
        long long s[n+1];
        s[0]=0;
        for(i=1;i<=n;i++){
            int tmp;
            scanf("%d",&tmp);
            s[i]=s[i-1]+tmp;
        }
        while(m--){
            int l,r;
            scanf("%d%d",&l,&r);
            printf("%lld\n",s[r]-s[l-1]);
        }
    }
}
