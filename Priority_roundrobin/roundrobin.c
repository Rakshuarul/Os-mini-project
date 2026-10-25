#include <stdio.h>
int main() {
    int fid[] = {201, 202, 203};
    int bz[]  = {6, 4, 3};
    int n = 3, q = 2, t = 0, done = 0;
    int rem[3];
    for (int i = 0; i < n; i++)
        rem[i] = bz[i];
    while (done < n) {
        for (int i = 0; i < n; i++) {
            if (rem[i] > 0) {
                int r = rem[i] < q ? rem[i] : q;
                printf("Flight%d taxi %d-%d\n", fid[i], t, t + r);
                t += r;
                rem[i] -= r;
                if (rem[i] == 0)
                    done++;
            }
        }
    }
    return 0;
}
