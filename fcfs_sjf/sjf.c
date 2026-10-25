#include <stdio.h>
int main() {
    int n=3, bt[3], id[3]={1,2,3}, ct[3], wt[3], tat[3];
    for (int i=0; i<n; i++) {
        printf("Enter data size (MB) for S%d: ", i+1);
        scanf("%d", &bt[i]);
    }
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if (bt[j]<bt[i]) { int t=bt[i]; bt[i]=bt[j]; bt[j]=t; t=id[i]; id[i]=id[j]; id[j]=t; }
    ct[0]=bt[0];
    for (int i=1; i<n; i++) ct[i]=ct[i-1]+bt[i];
    printf("Sat\tBT\tCT\tTAT\tWT\n");
    for (int i=0; i<n; i++) {
        tat[i]=ct[i]; wt[i]=tat[i]-bt[i];
        printf("S%d\t%d\t%d\t%d\t%d\n", id[i], bt[i], ct[i], tat[i], wt[i]);
    }
}
