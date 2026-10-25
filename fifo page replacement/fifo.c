#include <stdio.h>
#define CAP 3
int q[CAP], front=0, n=0;
void addJob(int job) {
    if(n==CAP) { printf("Evicted: %d\n",q[front]);
        front=(front+1)%CAP; n--; }
    q[(front+n)%CAP]=job; n++;
    printf("Queued: %d\n",job);
}
int main() {
    int i,j,m; scanf("%d",&m);
    for(i=0;i<m;i++) { scanf("%d",&j); addJob(j); }
    return 0;
}
