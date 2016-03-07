#include <cstdio>
#include <algorithm>
using namespace std;
typedef unsigned long long ULL;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		ULL a[n];
		for(int i=0;i<n;i++)scanf("%llu",&a[i]);
		sort(a,a+n);
		ULL ans=0,par=a[0];
		for(ULL i=1;i<n;i++){
			ans+=i*a[i]-par;
			par+=a[i];
		}
		printf("%llu\n",ans);
	}
} 

