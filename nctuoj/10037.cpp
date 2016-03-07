#include <cstdio>
#include <vector>
#define N 46341
using namespace std;
bool s[N]={0};
vector<int> p;
int main(){
	for(int i=2;i<N;i++){
		if(!s[i])p.push_back(i);
		for(int j=0;i*p[j]<N;j++){
			s[i*p[j]]=1;
			if(i%p[j]==0)break;
		}
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n<2){
			puts("no");
			continue;
		}
		bool chk=1;
		for(int i=0,si=p.size();chk&&i<si&&p[i]*p[i]<=n;i++)
			if(n%p[i]==0)chk=0;
		chk?puts("yes"):puts("no");
	}
}

