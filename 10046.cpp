#include <cstdio>
using namespace std;
long long f(long long p,int n){
	if(n==0)return 1;
	if(n>0&&n%2)return (p*f(p,n-1))%100000007;
	if(n>0&&n%2==0)return f((p*p)%100000007,n/2)%100000007;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF)printf("%lld\n",f(2,n)-1);
}

