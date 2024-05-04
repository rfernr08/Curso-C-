#include <iostream>
#include <thread>
#include <string>
#include <vector>
#include <mutex>
#include <chrono>

using namespace std;

bool keepProducing = false, keepConsuming = false;
mutex mtx;

class Producer{
    public:
        static void produce(vector<int>* vector, bool* boolean, mutex* mtx){
            while(!*boolean){
                mtx->lock();
                int push = rand();
                vector->push_back(push);
                cout << "Push " << push << endl;
                mtx->unlock();
            }
        }
};

class Consumer{
    public:
        static void consume(vector<int>* vector, bool* boolean, mutex* mtx){
            while(!*boolean){
                mtx->lock();
                int pop = 0;
                if(vector->size() != 0){
                    pop = vector->back();
                    vector->pop_back();
                }
                cout << "Pop " << pop << endl;
                mtx->unlock();
            }
        }
};

int main(){
    vector<int> vector;
    thread producer(&Producer::produce, &vector, &keepProducing, &mtx);
    thread consumer(&Consumer::consume, &vector, &keepConsuming, &mtx);
    this_thread :: sleep_for(chrono::seconds(5));
    keepProducing = true;
    keepConsuming = true;    
    producer.join();
    consumer.join();
    return 0;
}