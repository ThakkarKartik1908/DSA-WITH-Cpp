#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircularList{
    Node* head ;
    Node* tail;
public:
    CircularList(){
        head = tail = NULL;
    }

    void printCLL(){
        if(head == NULL){
            cout<<"CLL is empty"<<endl;
            return;
        }
        cout<<head->data<<"->";
        Node* temp = head->next;

        while(temp != head){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL) {// tail == NULL
            head = tail = newNode ;
            tail->next = head;
        }else{
            newNode->next = head;
            tail->next = newNode;
            head = newNode;
        }
    }

     void insertAtTail(int val){
        Node* newNode = new Node(val);
        
        if(tail == NULL) {// tail == NULL
            head = tail = newNode ;
            tail->next = head;
        }else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtHead(){
        if(head == NULL){
            cout<<"cll is empty.."<<endl;
            return;
        }else if(head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

       void deleteAtTail(){
        if(head == NULL){
            cout<<"cll is empty.."<<endl;
            return;
        }else if(head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = tail;
            Node* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
};

int main(){
    CircularList cll;
    cll.insertAtTail(4);
    cll.insertAtTail(3);
    cll.insertAtTail(2);
    cll.insertAtHead(1);
    cll.insertAtHead(10);
    cll.insertAtHead(9);
    cll.printCLL();
    cll.deleteAtHead();
    cll.deleteAtHead();
    cll.deleteAtTail();
    cll.printCLL();
    
    return 0;
}