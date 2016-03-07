#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    char c[5]={0};
    int x,y;
    scanf("%*s");
    scanf("%*s%d",&x);
    scanf("%*s%d",&y);
    while(scanf("%s",c)!=EOF){
        if(!strcmp(c,"E"))break;
        int tmp;
        scanf("%d",&tmp);
        if(!strcmp(c,"U"))y+=tmp;
        else if(!strcmp(c,"D"))y-=tmp;
        else if(!strcmp(c,"R"))x+=tmp;
        else if(!strcmp(c,"L"))x-=tmp;
    }
    printf("%d\n%d\n",x,y);
}
