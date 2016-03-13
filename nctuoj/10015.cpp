#include <cstdio>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        printf("%d %d\n",m+m-n,n-m);
    }
}