#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    while(n--){
        char c;
        int ans = 0;
        while((c = getchar()) != '\n')
            if(c >= '0' && c <= '9'){
                ungetc(c, stdin);
                int tmp;
                scanf("%d", &tmp);
                ans += tmp;
            }
        printf("%08d\n", ans);
    }
}
