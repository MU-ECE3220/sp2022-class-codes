#include <iostream>
#include <pthread.h>
#include <semaphore.h>

pthread_mutex_t myMutex;
sem_t mySem;

void *runner(void *arg);
int sum = 0;

int main(int argc, char *argv[]) {
    if(argc != 2) {
        std::cerr << "You need 2 arguments!\n";
        return EXIT_FAILURE;
    }
    if (atoi(argv[1]) <= 0) {
        std::cerr << "Argument needs to be positive\n";
        return EXIT_FAILURE;
    }

    pthread_mutex_init(&myMutex, NULL);
    sem_init(&mySem, 0, 1);

    int num_of_threads = atoi(argv[1]);
    pthread_t tid[num_of_threads];

    for(int i=0; i<num_of_threads; i++) {
        pthread_create(&tid[i], NULL, runner, NULL);
    }

    for(int i=0; i<num_of_threads; i++) {
        pthread_join(tid[i], NULL);
    }

    std::cout << "Sum is: " << sum << std::endl;
    pthread_mutex_destroy(&myMutex);
    return EXIT_SUCCESS;
}

void *runner(void *arg) {
    //pthread_mutex_lock(&myMutex);
    sem_wait(&mySem);
    for(int i=0; i<100; i++) {
        sum++;
    }
    sem_post(&mySem);
    //pthread_mutex_unlock(&myMutex);
    pthread_exit(0);
}