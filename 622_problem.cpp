class MyCircularQueue {
    int* arr;
    int size;
    int front;
    int rear;

public:
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        front=-1;
        rear=-1;       
    }
    
    bool enQueue(int value) {
        if((front == 0 && rear == size - 1) || (rear == front - 1)){
            // when Queue is full
            return false;
        }else{
            if(front == -1 && rear == -1){
                // when queue is empty
                front++;
                rear++;
                arr[rear] = value;
            }else if(rear == size-1){
                // when rear is at end but front != 0 
                rear = 0;
                arr[rear] = value;
            }else{
                // normal case
                rear++;
                arr[rear] = value;
            }
        }
        return true;
    }
    
    bool deQueue() {
        if(front == -1 && rear == -1){
            // empty case
            return false;
        }else{
            if(front == rear){
                // single element
                arr[front] = -1;
                front = -1;
                rear = -1;   
            }else if(front == size-1){
                // when front is end and it is circular queue
                arr[front] = -1;
                front = 0;                
            }else{
                // normal case 
                arr[front] = -1;
                front++;
            }
        }
        return true;       
    }
    
    int Front() {
        if(front == -1 && rear == -1){
            return -1;
        }else{
            return arr[front];
        }
    }
    
    int Rear() {
        if(front == -1 && rear == -1){
            return -1;
        }else{
            return arr[rear];
        }       
    }
    
    bool isEmpty() {
        if(front == -1 && rear == -1){
            return true;
        } else{
            return false;
        }     
    }
    
    bool isFull() {
        if((front == 0 && rear == size - 1) || (rear == front - 1)){
            // when Queue is full
            return true;
        }else{
            return false;
        }       
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */