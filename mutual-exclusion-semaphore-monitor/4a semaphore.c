#include <stdio.h>
#include <semaphore.h>
sem_t mutex;
int main(){
int n;
scanf("%d",&n);
sem_init(&mutex,0,1);
for ( int id=1;id<=n;id++){
sem_wait(&mutex);
printf("Robot %d charging\n",id);
sem_post(&mutex);}
}

