#include <stdio.h>
int main() {
    int users = 4, per_user = 250;
    int total_files = users * per_user;
    printf("Server: %d users x %d files each\n", users, per_user);
    printf("Total files: %d\n", total_files);
    printf("Single level worst case: %d comparisons\n", total_files);
    return 0;
}
