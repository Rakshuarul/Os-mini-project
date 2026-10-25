#include <stdio.h>
#include <pthread.h>
pthread_mutex_t l[2] = {PTHREAD_MUTEX_INITIALIZER,PTHREAD_MUTEX_INITIALIZER};
void* transcode(void*arg) {
    int id =*(int*)arg,next=(id+1)%2;
    pthread_mutex_lock(&l[id]); pthread_mutex_lock(&l[next]);
    printf("Transcoder Thread %d: Acquired locks & processing frame.\n", id);
    pthread_mutex_unlock(&l[next]); pthread_mutex_unlock(&l[id]);
    return NULL;
}
int main() {
    int id; pthread_t t;
    printf("Enter worker ID (0 or 1): ");
    scanf("%d", &id);
    pthread_create(&t, NULL, transcode, &id); pthread_join(t, NULL);
}
