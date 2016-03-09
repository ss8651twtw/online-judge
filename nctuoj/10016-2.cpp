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
#define PB push_back
using namespace std;
void gcd(int a,int b,int &d,int &x,int &y){
    if(!b){
		d=a;
		x=1;
		y=0;
		return;
	}
    gcd(b,a%b,d,y,x);
    y-=x*(a/b);
}
int main(){
	int a,b,d,x,y;
	scanf("%d%d",&a,&b);
	gcd(a,b,d,x,y);
	printf("%d\n",d==1?(b+x)%b:-1);
}

