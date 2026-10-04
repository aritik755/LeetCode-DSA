class Node {
public:
    int val;
    Node* next;
    Node(int data) {
        val = data;
        next = NULL;
    }
};
class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head = NULL;
    }
    
    int get(int index) {
        Node* temp = head;
        int position = 0;
        while(position != index && temp!= NULL){
            temp = temp->next;
            position++;
        }
        if(temp == NULL) return -1;
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* new_Node = new Node(val);
        new_Node->next = head;
        head = new_Node;
    }
    
    void addAtTail(int val) {
        if(head == NULL) {
            addAtHead(val);
            return;
        }
        Node* new_Node = new Node(val);
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_Node;
    }
    
    void addAtIndex(int index, int val) {
        if(index == 0){
            addAtHead(val);
            return;
        }
        Node* new_Node = new Node(val);
        int currentPosition = 0;
        Node* temp = head;
        while(currentPosition != index-1){
            temp = temp->next;
            currentPosition++;
        }
        new_Node->next = temp->next;
        temp->next = new_Node;
    }
    
    void deleteAtIndex(int index) {
        if(index == 0){
            Node* temp = head;
            head = head->next;
            delete(temp);
            return;
        }
        Node* prev = head;
        int currentPosition = 0;
        while(currentPosition != index-1){
            prev = prev->next;
            currentPosition++;
        }
        if(prev == NULL || prev->next == NULL) return;
        Node* temp = prev->next;
        prev->next = prev->next->next;
        delete(temp);
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */