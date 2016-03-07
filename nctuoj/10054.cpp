#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n,m;
	scanf("%d",&n);
	int a[n+5];
	for(int i=0;i<=n;i++){
		int tmp;
		scanf("%d",&tmp);
		a[i]=tmp;
		if(i)a[i]+=a[i-1];
	}
	scanf("%d",&m);
	while(m--){
		int tmp,*itr;
		scanf("%d",&tmp);
		itr=lower_bound(a,a+n+1,tmp);
		printf("%d\n",n-(int)(itr-a));
	}
} 

