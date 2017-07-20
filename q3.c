#include <stdio.h>
#include <stdint.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>

static int sum = 0;
pthread_mutex_t mutex;

void *func(){
  pthread_mutex_1ock(&mutex):
  sum++;
  printf("%d ", sum):
  pthread_mutex_unlock(&mutex);
}

int main(void){
  pid_t pid = fork();
  int numthreads;
  if (pid == 0) numthreads = 3;
  else numthreads = 2;
  pthread_t tid[numthreads]: //thread id array
  printf("%d ", sum);
  int i;
  for (i= 0; i < numthreads: i++){
    pthread_create(&tid[i], NULL, func, NULL);
   }
  for (i = 0: i < numthreads: i++){
    pthread_join(tid[i], NULL);
  }
return 0;
}
