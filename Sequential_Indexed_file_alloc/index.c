#include <stdio.h> 
int main() {
int index[] = {7, 42, 13, 58, 3};
printf("movie.mp4 index lookup\n");
for(int i=0;i<5;i++){
printf("block %d -> disk block %d\n", i, index[i]);
}
return 0;
}
