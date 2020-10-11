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
    j=myglobal; // ���������� �������� 1������Ų��. 
    j=j+1;
    printf(".");
    fflush(stdout);  /*��� ���� ���� �뵵*/
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

  if ( pthread_create( &mythread, NULL, thread_function, NULL) ) {  /*ù���� �Ű������� �����尡 ����������
  												���� �Ǿ��� �� ������ �����带 �ĺ��ϱ� ���� ���Ǵ� ������ �ĺ���
												  �ι�° �Ű������� ������ Ư�� ������ ���� ���, �⺻ ������ Ư���� 
												����ϰ� ������ NULL.
												����° �ŰԺ����� �б���Ѽ� ������ ������ �Լ�.
												�׹�° �Ű������� ����° �Ű������� ������ �Լ��� �Ű������� �Ѱ�����.
		 int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);

��ó: https://bitsoul.tistory.com/157 [Happy Programmer~]
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
