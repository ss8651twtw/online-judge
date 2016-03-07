#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#define PB push_back
using namespace std;
bool cmp(int a,int b){
	return a>b;
} 
int main(){
	vector<int> v[3];
	int n;
	scanf("%d",&n);
	while(n--){
		int tmp;
		scanf("%d",&tmp);
		v[0].PB(tmp);
	}
	sort(v[0].begin(),v[0].end(),cmp);
	scanf("%d",&n);
	while(n--){
		char c[5];
		scanf("%s",c);
		if(!strcmp(c,"m")){
			int p,q;
			scanf("%d%d",&p,&q);
			if(v[p-1].empty())printf("But %d is empty!\n",p);
			else{
				if(v[q-1].empty()){
					int now=v[p-1].back();
					v[p-1].pop_back();
					v[q-1].PB(now);
				}
				else{
					int nowa=v[p-1].back(),nowb=v[q-1].back();
					if(nowa>nowb)puts("Illegal Move");
					else{
						v[p-1].pop_back();
						v[q-1].PB(nowa);
					}
				}
			}
		}
		else{
			int tmp;
			scanf("%d",&tmp);
			if(v[tmp-1].empty())printf("But %d is empty!\n",tmp);
			else printf("%d\n",v[tmp-1].back());
		}
	}
} 

