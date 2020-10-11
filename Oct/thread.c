#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int myglobal;

void *
thread_function(void *arg)
{
  int i,j;

  for ( i=0; i<20; i++ ) {
    j=myglobal; // 전역변수를 가져오고 1증가시킨다. 
    j=j+1;
    printf(".");
    fflush(stdout);  /*출력 버퍼 비우는 용도*/
    sleep(1);
    myglobal=j;
  }
  return NULL;
}

int
main(void)
{
  pthread_t mythread;
  int i;

  if ( pthread_create( &mythread, NULL, thread_function, NULL) ) {  /*첫번재 매개변수는 쓰레드가 성공적으로
  												생성 되었을 때 생성된 쓰레드를 식별하기 위해 사용되는 쓰레드 식별자
												  두번째 매개변수는 쓰레드 특성 지정을 위해 사용, 기본 쓰레드 특성을 
												사용하고 싶으면 NULL.
												세번째 매게변수는 분기시켜서 실행할 쓰레드 함수.
												네번째 매개변수는 세번째 매개변수인 쓰레드 함수의 매개변수로 넘겨진다.
		 int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);

출처: https://bitsoul.tistory.com/157 [Happy Programmer~]
												  */
    printf("error creating thread.");
    abort();
  }

  for ( i=0; i<20; i++) {
    myglobal=myglobal+1;
    printf("o");
    fflush(stdout);
    sleep(1);
  }

  if ( pthread_join ( mythread, NULL ) ) {
    printf("error joining thread.");
    abort();
  }

  printf("\nmyglobal equals %d\n",myglobal);

  exit(0);
}
