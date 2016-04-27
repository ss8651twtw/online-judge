#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    deque<int> dq;
    int sz;
    cin >> sz;
    char m;
    while(cin >> m && m != 'e'){
        switch(m){
            int tmp;
            char chk;
            case 'a':
                do{
                    cin >> tmp;
                    dq.push_front(tmp);
                    if(dq.size() > sz)dq.pop_back();
                    cin >> chk;
                }while(chk == 'y');
                break;
            case 'b':
                do{
                    cin >> tmp;
                    dq.push_back(tmp);
                    if(dq.size() > sz)dq.pop_front();
                    cin >> chk;
                }while(chk == 'y');
                break;
            case 'c':
                do{
                    if(!dq.empty())dq.pop_front();
                    cin >> chk;
                }while(chk == 'y');
                break;
            case 'd':
                do{
                    if(!dq.empty())dq.pop_back();
                    cin >> chk;
                }while(chk == 'y');
                break;
        }
    }
    bool pl = true;
    while(!dq.empty()){
        pl = false;
        cout << dq.front() << " ";
        dq.pop_front();
    }
    if(pl)cout << "the list is empty.";
    cout << endl;
}
