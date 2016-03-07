#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,ma=0;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)scanf("%d",&a[i]);
		sort(a,a+n);
		do{
			int sum=0;
			for(int i=0;i<n;i++)sum+=(sum+a[i]-1)%a[i];
			ma=max(ma,sum);
		}while(next_permutation(a,a+n));
		printf("%d\n",ma);
	}
} 

