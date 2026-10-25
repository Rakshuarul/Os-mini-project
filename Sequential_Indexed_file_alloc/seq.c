#include <stdio.h>
int main() {
int start = 20, length = 5;
printf("movie.mp4 start=%d length=%d\n", start, length);
for (int i = 0; i < length; i++) {
printf("block %d -> disk block %d\n", i, start + i); }
return 0;
}
