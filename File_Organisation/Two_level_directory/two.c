#include <stdio.h>
int main() {
    int users = 4, per_user = 250;
    int comparisons = users + per_user;
    printf("Server: %d users x %d files each\n", users, per_user);
    printf("Two level worst case: %d comparisons\n", comparisons);
    return 0;
}
