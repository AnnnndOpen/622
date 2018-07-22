#include <iostream>
#include <vector>

using namespace std;

class MyCircularQueue {
private:
    int num;
    int c;
    vector<int> data;
    int s,e;
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        if (k>0)
            data=vector<int> (k);
        num=k;
        s=0;e=-1;c=0;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if (num-c>0){
            e++;
            if (e==num)
                e=0;
            data[e]=value;
            c++;
            return true;
        }
        else
            return false;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if (c>0){
            s++;
            if (s==num)
                s=0;
            c--;
            return true;
        }
        else
            return false;
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if (c>0)
            return data[s];
        else
            return -1;
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if (c>0)
            return data[e];
        else
            return -1;
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return (c==0);
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return (num-c==0);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue obj = new MyCircularQueue(k);
 * bool param_1 = obj.enQueue(value);
 * bool param_2 = obj.deQueue();
 * int param_3 = obj.Front();
 * int param_4 = obj.Rear();
 * bool param_5 = obj.isEmpty();
 * bool param_6 = obj.isFull();
 */
int main(){
    MyCircularQueue *c1=new MyCircularQueue(3);
    delete c1;
    return 0;
}