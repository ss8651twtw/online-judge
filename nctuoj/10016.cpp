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
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(__gcd(a,b)!=1)puts("-1");
	for(int i=0;i<b;i++)
		if((i*a)%b==1){
			printf("%d\n",i);
			break;
		}
}

