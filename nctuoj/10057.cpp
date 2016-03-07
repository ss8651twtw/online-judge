#include <cstdio>
#include <cstring>
#include <map>
#include <vector>
#include <algorithm>
#define PB push_back
#define NODE 200005
using namespace std;
vector<int> edge[NODE];
int n,m,a[NODE];
long long ma;
bool vis[NODE];
inline void init(){
	for(int i=0;i<NODE;i++)edge[i].clear();
	ma=0;
	memset(vis,0,sizeof(vis));
}
long long sol(int s){
	long long sum=0;
	vector<int> stack;
	stack.PB(s);
	while(!stack.empty()){
		int now=stack.back();
		stack.pop_back();
		if(vis[now])continue;
		vis[now]=1;
		sum+=a[now];
		for(vector<int>::iterator itr=edge[now].begin();itr!=edge[now].end();itr++)
			if(!vis[*itr])stack.PB(*itr);
	}
	return sum;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		init();
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++)scanf("%d",&a[i]);
		while(m--){
			int a,b;
			scanf("%d%d",&a,&b);
			edge[a].PB(b);
			edge[b].PB(a);
		}
		for(int i=1;i<=n;i++)if(!vis[i])ma=max(ma,sol(i));
		printf("%lld\n",ma);
	}
} 

