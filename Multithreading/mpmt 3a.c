#include <pthread.h>
#include <stdio.h>
void* task(void* arg) { printf("Thread %ld executing (multi-core parallel)\n", (long)arg); return NULL; }
int main() {
    pthread_t t1, t2, t3, t4; pthread_create(&t1, NULL, task, (void*)1); pthread_create(&t2, NULL, task, 
    (void*)2); pthread_create(&t3, NULL, task, (void*)3); pthread_create(&t4, NULL, task, (void*)4); 
    pthread_join(t1, NULL); pthread_join(t2, NULL); pthread_join(t3, NULL); pthread_join(t4, NULL); return 0; }
