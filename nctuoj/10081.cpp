#include <bits/stdc++.h>
#define PB push_back
#define REP(x, y, z) for(int x = y; x < z; x++)
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	list<int> ll;
	char c;
	int a, b, tmp;
	bool chk;
	while(cin >> c){
		switch(c){
			case 'i':
				while(cin >> tmp && tmp)ll.push_back(tmp);
				ll.sort();
				break;
			case 'd':
				while(cin >> tmp && tmp)ll.remove(tmp);
				break;
			case 'r':
				ll.reverse();
				break;
			case 's':
				chk = 0;
				cin >> a >> b;
				for(auto &x : ll)
					if(x == a || x == b){
						if(chk)x = a + b - tmp;
						else{
							x = a + b - x;
							tmp = x;
							chk = 1;
						}
					}
				break;
			case 'e':
				for(auto &x : ll)cout << x << ' ';
				cout << endl;
				break;
		}
		if(c == 'e')break;
	}
}
