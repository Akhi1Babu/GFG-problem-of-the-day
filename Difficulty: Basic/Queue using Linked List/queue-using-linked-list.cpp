class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
    Node* head;
    int queuesize;
    Node* prev;

  public:
    myQueue() {
        // Initialize your data members
            head=NULL;
            queuesize=0;
            prev=head;
        
    }

    bool isEmpty() {
        // check if the queue is empty
        return head==nullptr;
        
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
          Node * newnode=new Node(x);
        if(isEmpty()){
            head=newnode;
            prev=newnode;
            
        }else{
      
        prev->next=newnode;
        prev=newnode;
        }
        queuesize++;
        
    }

    void dequeue() {
        // Removes the front element of the queue
        Node* temp=head;
        head=head->next;
        delete(temp);
        queuesize--;
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(isEmpty()){
            return -1;
        }
        return head->data;
    }

    int size() {
        // Returns the current size of the queue.
        return queuesize;
    }
};
