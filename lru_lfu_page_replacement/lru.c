#include <stdio.h>
#define CAP 3
int main() {
    char seq[] = "ABACADBEA";
    char id[CAP];
    int last[CAP], n = 0, hits = 0, k, i, v;
    for (k = 0; seq[k]; k++) {
        for (i = 0; i < n && id[i] != seq[k]; i++);
        if (i < n) {
            hits++;
            last[i] = k;
            printf("Segment %c: HIT\n", seq[k]);
            continue;
        }
        if (n < CAP) {
            i = n++;
            printf("Segment %c: MISS\n", seq[k]);
        } else {
            for (v = 0, i = 1; i < CAP; i++)
                if (last[i] < last[v]) v = i;
            printf("Segment %c: MISS (evict %c)\n", seq[k], id[v]);
            i = v;
        }
        id[i] = seq[k];
        last[i] = k;
    }
    printf("Hits=%d Misses=%d Hit rate=%.1f%%\n", hits, k - hits, 100.0 * hits / k);
    return 0;
}
