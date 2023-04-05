#include <iostream>
using namespace std;


struct Node{
    int data;
    struct Node* next;
};

//Head pointer ---
struct Node* front = NULL;
struct Node* rear = NULL;


void enQueue(int data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    if(front==NULL){
        front = new_node;
        rear = front;

    }else{
        rear->next = new_node;
        rear = rear->next;
    }
}

int deQueue(){
    if(front!=NULL){
        struct Node* ptr;
        ptr = front;
        front = front->next;
        return ptr->data;
    }
}


void display() {
   struct Node* ptr;
   ptr = front;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
   cout<<endl;
}

int top(){
    return front->data;
}


bool isExists(int value){
    struct Node* ptr = front;
    while(ptr != NULL  ){
        if(ptr->data == value){
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}


int main(){
    enQueue(25);
    enQueue(65);
    enQueue(35);
    enQueue(45);
    enQueue(100);

    cout<<top()<<endl;

    cout<<isExists(45)<<endl;

    display();

    cout<<deQueue()<<endl;
    cout<<deQueue()<<endl;

    display();
    return 0;
}




