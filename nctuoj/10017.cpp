#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < 26; i++)v.push_back(i);
        while(n--){
            int tmp, c;
            cin >> tmp;
            c = v[tmp];
            v.erase(v.begin() + tmp);
            v.insert(v.begin(), c);
            cout << (char)(c + 'a');
        }
        cout << endl;
    }
}