#include <stdio.h>
int main(){
    int n,i,j,d=0,a[10][10];
    printf("Enter gaming sessions: ");
    scanf("%d",&n);
    printf("Enter wait-for matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j]&&a[j][i])
                d=1;
    printf(d?"Deadlock detected\n":"No deadlock\n");
}
