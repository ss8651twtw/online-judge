#include <cstdio>
#include <cstring>
#include <algorithm>
#define PB push_back
using namespace std;
vector<long long> prime;
bool isprime(long long n){
    if(n==1)return 0;
    for(long long i=0;prime[i]*prime[i]<=n;i++)
        if(n%prime[i]==0)return 0;
    return 1;
}
void make_prime(){
    prime.PB(2);
    prime.PB(3);
    for(long long i=5,gap=2;i<100005;i+=gap,gap=6-gap)
        if(isprime(i))prime.PB(i);
}
int main(){
    make_prime();
    int t;
    scanf("%d",&t);
    while(t--){
        int n,len;
        long long ans=0;
        scanf("%d",&n);
        char s[15]={0};
        sprintf(s,"%d",n);
        len=strlen(s);
        sort(s,s+len);
        do{
            long long tmp;
            sscanf(s,"%lld",&tmp);
            if(isprime(tmp))ans+=tmp;
        }while(next_permutation(s,s+len));
        printf("%lld\n",ans);
    }
}