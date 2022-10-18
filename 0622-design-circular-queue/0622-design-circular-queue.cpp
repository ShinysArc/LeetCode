class MyCircularQueue {
public:
    MyCircularQueue(int k)
    : q_(k)
    , head_(0)
    , currentSize_(0)
    {}
    
    bool enQueue(int value) {
        if (isFull())
            return false;
        q_[(head_ + currentSize_) % q_.size()] = value;
        currentSize_++;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty())
            return false;
        head_ = (head_ + 1) % q_.size();
        currentSize_--;
        return true;
    }
    
    int Front() {
        if (isEmpty())
            return -1;
        return q_[head_];
    }
    
    int Rear() {
        if (isEmpty())
            return -1;
        return q_[(head_ + currentSize_ - 1) % q_.size()];
    }
    
    bool isEmpty() {
        return currentSize_ == 0;
    }
    
    bool isFull() {
        return q_.size() == currentSize_;
    }

private:
    int currentSize_;
    int head_;
    vector<int> q_;
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