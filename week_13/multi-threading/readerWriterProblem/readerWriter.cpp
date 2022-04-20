#include<iostream>
#include<unistd.h>
#include<pthread.h>

// define number of threads
#define NUM_OF_THREADS 40
int data = 0;
int readerCount = 0;

// mutex between writer and reader
pthread_mutex_t writer_lock;
pthread_mutex_t reader_lock;

// Define thread task prototypes
void *reader(void *arg);
void *writer(void *arg);

int main() {

    pthread_t tid[NUM_OF_THREADS];
    int thread_no[NUM_OF_THREADS];
    srand(time(NULL));
	// init mutex and error check
	if(pthread_mutex_init(&writer_lock, NULL) != 0) {
        std::cerr<< "Error initializing writer lock\n";
        return EXIT_FAILURE;
    }
    if(pthread_mutex_init(&reader_lock, NULL) != 0) {
        std::cerr<< "Error initializing reader lock\n";
        return EXIT_FAILURE;
    }

	// create random number of reader and writer threads
    for(int i=0; i<NUM_OF_THREADS; i++) {
        if((rand()%2) == 0) {
            pthread_create(&tid[i], NULL, writer, &thread_no[i]);
        }
        else {
            pthread_create(&tid[i], NULL, reader, &thread_no[i]);
        }
    }

	// Join and run threads
    for(int i=0; i<NUM_OF_THREADS; i++) {
        pthread_join(tid[i], NULL);
    }

	// destroy the mutex
	pthread_mutex_destroy(&writer_lock);
    pthread_mutex_destroy(&reader_lock);
	return EXIT_SUCCESS;
}

//WRITER thread task
void *writer(void *arg) {
    int *thread_id = (int *)arg;
    while(1) {
		//obtain the lock
        pthread_mutex_lock(&writer_lock);

		// Critical Section BEGIN
        data++;
        std::cout << "Writer thread #" << *thread_id << "set data to: " << data << std::endl;
		
		// Critical Section END
    
		//release the lock
        pthread_mutex_unlock(&writer_lock);
    }
}

//READER thread task
void *reader(void *arg) {
	int *thread_id = (int *)arg;
    while(1) {
    	//obtain the lock
        pthread_mutex_lock(&reader_lock);
        // check if there is readers inside the critical section
        if(readerCount == 0) {
            pthread_mutex_lock(&writer_lock);
        }
        readerCount++;
        pthread_mutex_unlock(&reader_lock);

		// Critical Section BEGIN

        std::cout << "Reader thread #" << *thread_id << "reads data: " << data << std::endl;
        
		// Critical Section END

        // update reader count while leaving critical section
        pthread_mutex_lock(&reader_lock);
        readerCount--;
        // check if there is readers inside the critical section
        if(readerCount == 0) {
            pthread_mutex_unlock(&writer_lock);
        }
        pthread_mutex_unlock(&reader_lock);
    }
}


