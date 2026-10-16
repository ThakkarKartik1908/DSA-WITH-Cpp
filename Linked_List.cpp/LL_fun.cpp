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

class List{
// privte no need pass any where
    Node* head ;
    Node* tail ;
public:
    List(){
        head = tail = NULL ;
    }

    void printLL(){ //O(n)
        Node* temp = head;
        while(temp != NULL){ //temp->next != NULL
            cout<<temp->data<<"->";
            temp = temp->next;
        }
                                    //cout << temp->data;
        cout <<"NULL"<< endl;
    }
    void push_front(int val){ //O(1)
        Node* newNode = new Node(val);//dynamic use bcoz we want to create ll in main
        // Node newnode(val);static way after this fun it delete
        if(head == NULL){
            head = tail = newNode ;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    
    void push_back(int val){ //O(1)
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next =newNode;
            tail = newNode;
            //Node*temp = head; //O(n)
            //while(temp->next != NULL){
            //    temp = temp->next;
            //}
            //temp->next = newNode;
        }
    }

    void pop_front(){//O(1)
        if(head == NULL){
            cout <<"LL is empty"<<endl;
            return;
        }else{ // without else also write
            Node* temp = head;
            head = temp->next ; // head->next
            temp->next = NULL;
            delete temp;
        }
    }
    void pop_back(){//O(n)
        if(head == NULL){
            cout <<"LL is empty"<<endl;
            return ;
        }else{
            //without tail
            Node* temp = head;
            while(temp->next->next != NULL){//with temp->next != tail
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail; // node data was delete
            tail = temp;
        }
    }

    void insert(int val,int pos){ //O(n)
        if(pos < 0){
            cout<<"invalid pos"<<endl;
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i=0 ;i<pos-1;i++){
            // extra check
            if(temp == NULL){
                cout<<"invalid pos"<<endl;
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int data){ //O(n)
        Node* temp = head;
        int pos = 0;
        while(temp != NULL){
            if(temp->data == data){
                cout<<"present"<<endl;
                return pos;
            }
            pos++;
            temp = temp->next;
        }
        cout<<"not present"<<endl;
        return -1;
    }
};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(0);
    ll.insert(5,3);
    ll.printLL();
    cout<<"position :"<<ll.search(8);

    return 0;
}