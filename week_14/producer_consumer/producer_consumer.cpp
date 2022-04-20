#include<iostream>
#include<pthread.h>

// define number of buffer, producer and consumer
#define BUFFER_SIZE 20
#define MAX_PRODUCERS 12
#define MAX_CONSUMERS 24

// Define the mutex or semaphores
pthread_mutex_t isEmpty = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t isFull = PTHREAD_MUTEX_INITIALIZER;

// Define prototypes for producer and consumer
void *producer(void *arg);
void *consumer(void *arg);
int findFull();
int findEmpty();

// Define buffer array
int buffer[BUFFER_SIZE]; 

// Define full, empty count, produced, consumed
int full_count = 0;
int empty_count = 0;
int produced = 0;
int consumed = 0;

// Helper function: find free space in array
int findEmpty() {
    int i = 0;
    while(1) {
        if(buffer[i] == 0) {
            return i;
        }
        i = (i + 1) % BUFFER_SIZE;
    }
}

// Helper function: find filled space in array
int findFull() {
    int i = 0;
    while(1) {
        if(buffer[i] != 0) {
            return i;
        }
        i = (i + 1) % BUFFER_SIZE;
    }
}

// main function
int main() {
	// initialize buffer array
    for(int i=0; i<BUFFER_SIZE; i++) {
        buffer[i] = 0;
    }

	// Create the threads
    pthread_t tid[MAX_PRODUCERS + MAX_CONSUMERS];
    srand(time(NULL));
	// Create producer threads
    for(int i=0; i<MAX_PRODUCERS; i++) {
        void *id = new int;
        int *p = (int *)id;
        *p = i + 1;
        pthread_create(&tid[i], NULL, producer, p);
    }

	// Create consumer threads
    for(int i=0; i<MAX_CONSUMERS; i++) {
        void *id = new int;
        int *p = (int *)id;
        *p = i + 1;
        pthread_create(&tid[i + MAX_PRODUCERS], NULL, consumer, p);
    }

	// Join the threads
    for(int i=0; i<MAX_PRODUCERS + MAX_CONSUMERS; i++) {
        pthread_join(tid[i], NULL);
    }

    return EXIT_SUCCESS;

}

// Define producer function
void *producer(void *arg) {
    int index = 0, data;
    do {
        int producer_id = *((int *)arg);
        data = (rand() % 10) + 50;
        while(1) {
            if(pthread_mutex_lock(&isEmpty) == 0) {
                break;
            }
        }
        index = findEmpty();
        produced++;
        buffer[index] = data;
        std::cout << "Producer id=" << producer_id << ", data=" << index << ", total P=" << produced << std::endl;
        pthread_mutex_unlock(&isFull); 
    } while (1);
}

// Define consumer function
void *consumer(void *arg) {
    int index = 0;
    do {
        int consumer_id = *((int *)arg);
        while(1) {
            if(pthread_mutex_lock(&isFull) == 0) {
                break;
            }
        }
        index = findFull();
        consumed++;
        std::cout << "Consumer id=" << consumer_id << ", data=" << index << ", total C=" << consumed << std::endl;
        buffer[index] = 0;
        pthread_mutex_unlock(&isEmpty); 
    } while (1);
}

