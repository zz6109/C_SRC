#include <stdio.h>
#include <pthread.h>            // 이런 제너릭한 함수를 만들때 함수 포인터를 쓰는 것이다. 
#include <unistd.h>

void* thread_main(void *arg);

int main(void)
{
    pthread_t t_id;     // lu 숫자
    int thread_param = 5;

    pthread_create(&t_id, NULL, thread_main, (void*)&thread_param);      // thread_main : 멀티태스킹할 함수

    sleep(10); puts("end of main");   
    return 0;
}

void* thread_main(void *arg)        // void포인터로 값을 받으면 정수로도 실수로도 변환해서 계산할수 있다.
{
    int i;
    int cnt =*((int*)arg);          //정수형으로 선언
    // double cnt =*((int*)arg);    //실수형으로 선언
    for (i = 0; i < cnt; i++)
    {
        sleep(1); puts("running thread");
    }
    return NULL;
    
}