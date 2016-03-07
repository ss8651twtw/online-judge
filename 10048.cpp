#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+5];
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        do{
            printf("%d",a[0]);
            for(int i=1;i<n;i++)printf(" %d",a[i]);
            puts("");
        }while(next_permutation(a,a+n));
    }
}
