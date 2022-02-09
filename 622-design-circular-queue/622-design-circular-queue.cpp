class MyCircularQueue {
    int size;
    int cap;
    int *arr;
    int front;
    int rear;
public:
    MyCircularQueue(int k) {
        size=0;
        cap=k;
        arr=new int[cap];
        front=0;
        rear=-1;
    }
    
    bool enQueue(int value) {
        if(isFull()){return false;}
        // int rear=Rear();
        rear=(rear+1)%cap;
        arr[rear]=value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        // int front=Front();
        front=(front+1)%cap;
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[rear];
        }
    }
    
    bool isEmpty() {
        if(size==0){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if(size==cap){
            return true;
        }
        else{
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