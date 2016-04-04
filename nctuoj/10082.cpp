#include <bits/stdc++.h>
#define PB push_back
using namespace std;
typedef unsigned long long ULL;
int main(){
	ULL ha[25][50] = {0};
	for(int i = 0 ; i < 25; i++){
		ha[i][0] = ha[i][i] = 1;
		for(int j = 1; j < i; j++)ha[i][j] = ha[i - 1][j - 1] + ha[i - 1][j];
	}
	ULL a, b;
	while(~scanf("%llu%llu", &a, &b))printf("%llu\n", ha[a][b]);
}


