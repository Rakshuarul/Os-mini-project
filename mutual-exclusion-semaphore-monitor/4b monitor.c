#include <stdio.h>
#include <pthread.h>
pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;
int main(){
int n;scanf("%d",&n);
for(int id=1;id<=n;id++){pthread_mutex_lock(&m);
printf("Robot %d charging\n",id);
pthread_mutex_unlock(&m);
}
}
