#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
char map[10][10];
bool ans=0;
void chk(char (&s)[10][10],bool (&vis)[10],int x,int y){
	for(int i=0;i<9;i++)vis[s[x][i]-'0']=vis[s[i][y]-'0']=1;
	for(int i=x/3*3,cnti=0;cnti<3;i++,cnti++)
		for(int j=y/3*3,cntj=0;cntj<3;j++,cntj++)
			vis[s[i][j]-'0']=1;
}
void go(char (&s)[10][10],int x,int y){
	if(ans)exit(0);
	if(x==9&&y==0){
		for(int i=0;i<9;i++)puts(s[i]);
		ans=1;
	}
	int nx=x,ny=y+1;
	if(y==8){
		nx++;
		ny=0;
	}
	if(s[x][y]!='0')return go(s,nx,ny);
	char tmp[10][10]={0};
	memcpy(tmp,s,sizeof(s));
	bool vis[10]={0};
	chk(s,vis,x,y);
	for(int i=1;i<10;i++)
		if(!vis[i]){
			//printf("--------\n%d %d %d\n--------\n",x,y,i);
			tmp[x][y]=i+'0';
			go(tmp,nx,ny);
		}
}
int main(){
	for(int i=0;i<9;i++)scanf("%s",map[i]);
	go(map,0,0);
}

