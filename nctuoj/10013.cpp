#include <cstdio>
#include <algorithm>
using namespace std;
int a[100005];
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n,s,t;
        long long ans=0;
        scanf("%d%d%d",&n,&s,&t);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        for(int i=s-1;i<t;i++)ans+=a[i];
        printf("%lld\n",ans);
    }
}