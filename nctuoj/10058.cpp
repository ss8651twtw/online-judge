#include <bits/stdc++.h>
#define PB push_back
using namespace std;
int t, n;
int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int degree[n + 5] = {0}, len = 0;
		vector<int> v[n + 5];
		for(int i = 1; i < n; i++){
			int a, b;
			scanf("%d%d", &a, &b);
			v[a].PB(b);
			v[b].PB(a);
			degree[a]++;
			degree[b]++;
		}
		queue<int> q[2];
		int pre = 0, cur = 1;
		for(int i = 1; i <= n; i++)
			if(degree[i] == 1)q[0].push(i);
		while(n > 2){
			len++;
			while(!q[pre].empty()){
				int tmp = q[pre].front();
				q[pre].pop();
				n--;
				for(auto &x : v[tmp]){
					degree[x]--;
					if(degree[x] == 1)q[cur].push(x);
				}
			}
			swap(pre, cur);
		}
		printf("%d %d\n", n, (n & 1) ? len - 1 : len);
		int a[2], cnt = 0;
		for(int i = 0; i < 2; i++)
			while(!q[i].empty()){
				a[cnt++] = q[i].front();
				q[i].pop();
			}
		if(cnt == 1)printf("%d\n", a[0]);
		else printf("%d\n%d\n", min(a[0], a[1]), max(a[0], a[1]));
	}
}

