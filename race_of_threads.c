


#include <pthread.h>
#include <stdio.h>


int i = 0;

int thread_one(){
	for (int j = 0; k < 1000000; k++){
		i++;
	}
}

int thread_two(){
  for (int k= 0; k < 1000000; k++){
    i--;
  }
}


void main(){
	pthread_t Thread_one;
	pthread_create(&Thread_one, NULL, thread_one, NULL);
	pthread_t Thread_two;
	pthread_create(&Thread_two, NULL, thread_two, NULL);
	pthread_join(Thread_one, NULL);
	pthread_join(Thread_two, NULL);
	printf(i);
}
