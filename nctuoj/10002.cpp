#include <cstdio>
using namespace std;
int mo[]={5,1,2,5,0,3,5,1,4,6,2,4};
int md[]={31,29,31,30,31,30,31,31,30,31,30,31};
void go(int m){
	int d=mo[m-1],cnt=1,ma=md[m-1];
	for(int i=0;i<d;i++)printf("    ");
	while(cnt<=ma){
		printf("%4d",cnt);
		d++;
		if(d==7&&cnt!=md[m-1]){
			puts("");
			d=0;
		}
		cnt++;
	}
	puts("");
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int m;
		scanf("%d",&m);
		puts(" Sun Mon Tue Wed Thu Fri Sat");
		go(m);
	}
}