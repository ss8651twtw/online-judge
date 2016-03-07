#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		unsigned long long ma=0,tmp;
		while(n--){
			scanf("%llu",&tmp);
			ma=max(ma,tmp);
		}
		printf("%llu\n",ma);
	}
} 

