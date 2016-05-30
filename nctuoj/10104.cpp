#include <bits/stdc++.h>
using namespace std;
int t, n;
int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int sum1 = 0, sum9 = 0, cur = -1;
        for(int i = 0; i < n; i++){
            int tmp;
            scanf("%d", &tmp);
            if(tmp == 9 && cur != 9){
                sum9++;
                cur = 9;
            }
            else if(tmp == 1 && cur != 1){
                sum1++;
                cur = 1;
            }
        }
        printf("%d\n", min(sum1, sum9) + 1);
    }
}
