#include <stdio.h>
int main() {
    int fid[] = {201, 202, 203, 204};
    int rt[]  = {5, 3, 4, 6};
    int pr[]  = {2, 4, 1, 3};
    /* sort flights by priority (lower number = more urgent) */
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (pr[i] > pr[j]) {
                int t;
                t = pr[i];  pr[i] = pr[j];   pr[j] = t;
                t = fid[i]; fid[i] = fid[j]; fid[j] = t;
                t = rt[i];  rt[i] = rt[j];   rt[j] = t;
            }
        }
    }
    /* clear each flight to land for its required runway time */
    int t = 0;
    for (int i = 0; i < 4; i++) {
        printf("Flight%d land=%d-%d\n", fid[i], t, t + rt[i]);
        t += rt[i];
    }
    return 0;
}
