#include <stdio.h>
int main(){
    int n,m,i,j,a[10][10],need[10][10],av[10],safe=1;
    printf("Enter sessions & resources: ");
    scanf("%d%d",&n,&m);
    printf("Enter Allocation:\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    printf("Enter Need:\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&need[i][j]);
    printf("Enter Available:\n");
    for(j=0;j<m;j++)
        scanf("%d",&av[j]);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(need[i][j]>av[j])
                safe=0;
    printf(safe?"Safe allocation\n":"Request delayed\n");
}
