#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int dp[100000];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,g;
        scanf("%d%d",&n,&g);
        int w[n+5],v[n+5],ans=0;
        for(int i=0;i<n;i++)scanf("%d",&w[i]);
        for(int i=0;i<n;i++)scanf("%d",&v[i]);
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++)
            for(int j=g;j>w[i];j--){
                dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
                ans=max(ans,dp[j]);
            }
        printf("%d\n",ans);
    }
}
