#include <vector>
struct Node{
    Node* next;
    int val;
    //Constructor ':' initializes member variables before constructor body runs
    // val(val) takes parameter val and initializes struct val field with it
    //next(nullptr) initializes next to nullptr
    //{} empty constructor body doesn't need to be used
    //Member initializtion list
    Node(int val) : val(val), next(nullptr){}
};



class LinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList() {
        this->head = new Node(-1);
        this->tail = head;
        this->size = 0;
    }

    int get(int index) {
        //needs to be same type
       Node* cur = new Node(-1);

       int counter = 0; //keep track compare to index
       cur = head->next; //Start after the dummy node

       while(cur != nullptr){
         //return the value 
         if(counter == index){
            return cur->val;
         }
         counter++;
         cur = cur->next; //update move to next node
       }
        return -1; //If out of bounds
    }

    void insertHead(int val) {
    Node* newNode = new Node(val);
    newNode->next = head->next;   // point new node at old first element
    head->next = newNode;         // dummy now points to new node
    if (tail == head) {           // list was empty, tail needs updating too
        tail = newNode;
    }
    size++;
}
    
    void insertTail(int val) {
    Node* newNode = new Node(val);
    tail->next = newNode;
    tail = newNode;
    size++;
}

    bool remove(int index) {
    int counter = 0;
    Node* cur = head;
    
    while(counter < index && cur != nullptr) {
        counter++;
        cur = cur->next;
    }
    
    // Check cur is valid FIRST
    if(cur != nullptr && cur->next != nullptr) {
        if(cur->next == tail) {
            tail = cur;
        }
        Node* toDelete = cur->next;
        cur->next = cur->next->next;
        delete toDelete;
        return true;
    }
    return false;
}

    vector<int> getValues() {
        vector<int> values;
        Node* cur = head->next; //starts after dummy node

        while(cur != nullptr){
            values.push_back(cur->val); //add each value
            cur = cur->next; //move to next
        }
        return values;
    }
};
