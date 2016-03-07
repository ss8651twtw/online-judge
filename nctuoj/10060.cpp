#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <utility>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	while(n--){
		int x,y;
		x=y=0;
		char c='a';
		while(c!='\n'){
			if(c>='0'&&c<='9'){
				ungetc(c,stdin);
				int tmp;
				scanf("%d",&tmp);
				c=getchar();
				switch(c){
					case 'U':case 'u':y+=tmp;break;
					case 'D':case 'd':y-=tmp;break;
					case 'R':case 'r':x+=tmp;break;
					case 'L':case 'l':x-=tmp;break;
				}
				if(c=='\n')break;
			}
			c=getchar();
		}
		printf("%d %d\n",x,y);
	}
}


