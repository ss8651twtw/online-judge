#include <cstdio>
using namespace std;
int p[1005]={0};
int f(int n){
	if(n>=1000)return n-10;
	if(!p[n])p[n]=f(f(n*3)+1);
	return p[n];
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",f(n));
	}
}

