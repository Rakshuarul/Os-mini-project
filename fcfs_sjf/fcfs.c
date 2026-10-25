#include <stdio.h>
int main() {
    int n=3, at[3], bt[3], ct[3], wt[3], tat[3];
    for (int i=0; i<n; i++) {
        printf("Enter Arrival Time and Burst Time for S%d: ", i+1);
        scanf("%d %d", &at[i], &bt[i]);
    }
    ct[0] = at[0] + bt[0];
    for (int i=1; i<n; i++)
        ct[i] = (at[i]>ct[i-1] ? at[i] : ct[i-1]) + bt[i];
    printf("Sat\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i=0; i<n; i++) {
        tat[i] = ct[i]-at[i]; wt[i] = tat[i]-bt[i];
        printf("S%d\t%d\t%d\t%d\t%d\t%d\n", i+1, at[i], bt[i], ct[i], tat[i], wt[i]);
    }
}

