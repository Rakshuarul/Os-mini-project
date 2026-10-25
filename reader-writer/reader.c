#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
sem_t m,w;
int rc = 0;
void* reader(void* id) {
    sem_wait(&m);
    if (++rc == 1)
        sem_wait(&w);
    sem_post(&m);
printf("Scientist %ld reading satellite record\n", (long)id);
    sem_wait(&m);
    if (--rc == 0)
        sem_post(&w);
    sem_post(&m);
    return NULL;
}

void* writer(void* id) {
    sem_wait(&w);
    printf("Engineer updating satellite record\n");
    sem_post(&w);
    return NULL;
}

int main() {
int n, i; pthread_t t[50];
    sem_init(&m, 0, 1); sem_init(&w, 0, 1); scanf("%d", &n);
    for (i = 0; i < n; i++) pthread_create(&t[i], NULL, reader, (void*)(long)(i+1));
    pthread_create(&t[n], NULL, writer, NULL);
    for (i = 0; i <= n; i++) pthread_join(t[i], NULL);
    return 0; }
