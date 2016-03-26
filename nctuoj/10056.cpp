#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <utility>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
typedef queue<int> QI;
int main(){
	int t, n, m;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &n, &m);
		bool vis[m + 5] = {0};
		QI q;
		map<int, QI> myp;
		while(n--){
			char s[10];
			scanf("%s", s);
			if(!strcmp(s, "push")){
				int a, b;
				scanf("%d%d", &a, &b);
				if(!vis[b]){
					q.push(b);
					vis[b] = 1;
				}
				auto &x = myp[b];
				x.push(a);
			}
			if(!strcmp(s, "pop")){
				int tmp = q.front();
				auto &x = myp[tmp];
				printf("%d\n", x.front());
				x.pop();
				if(x.empty()){
					vis[tmp] = 0;
					q.pop();
				}
			}
		}
	}
}

