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
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int ans[n+1];
		for(int i=1;i<=n;i++)ans[i]=i;
		do{
			bool vis1[25]={0},vis2[50]={0},chk=1;
			for(int i=1;chk&&i<=n;i++){
				if(vis1[ans[i]+i]||vis2[ans[i]-i+10])chk=0;
				else vis1[ans[i]+i]=vis2[ans[i]-i+10]=1;
			}
			if(chk){
				for(int i=1;i<=n;i++)printf("(%d, %d)",ans[i],i);
				puts("");
			}
		}while(next_permutation(ans+1,ans+n+1));
	}
}

