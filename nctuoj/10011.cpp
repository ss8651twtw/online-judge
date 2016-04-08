#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, now = 1;
        cin >> n;
        bool chk = 1;
        vector<int> st;
        st.push_back(0);
        for(int i = 0; i < n; i++){
            int tmp;
            cin >> tmp;
            if(!chk)continue;
            while(tmp != st.back() && now <= n)st.push_back(now++);
            if(tmp == st.back())st.pop_back();
            else chk = 0;
        }
        if(chk)cout << "yes\n";
        else cout << "no\n";
    }
}