#include <bits/stdc++.h>
#define PB push_back
using namespace std;
int gcd(int a, int b){
	if(b == 0)return a;
	return gcd(b, a % b);
}
int main(){
	int a, b;
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin >> a >> b)cout << gcd(a, b) << endl;
}

