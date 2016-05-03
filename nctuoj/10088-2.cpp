#include<bits/stdc++.h>
using namespace std;
int n, m, k, ans;
struct node{
    int a, b;
    bool operator<(const node& x)const{
    	return b < x.b;
	}
}no[25];
void go(int idx, int M, int K){
	if(idx >= n)return;
	if(K + no[idx].b > k)return;
	if(M + no[idx].a >= m)ans++;
	go(idx + 1, M + no[idx].a, K + no[idx].b);
	go(idx + 1, M, K);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &n, &m, &k);
        for(int i = 0; i < n; i++)scanf("%d%d", &no[i].a, &no[i].b);
        sort(no, no + n);
        ans = 0;
        go(0, 0, 0);
        printf("%d\n", ans);
    }
}
