#include <iostream>
using namespace std;


struct Node{
    int data;
    struct Node* next;
};

//Head pointer ---
struct Node* head = NULL;


void enQueue(int data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    if(head==nullptr){
        head = new_node;
        head->next = NULL;
    }else{
        struct Node* ptr;
        ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = new_node;

    }
}

void deQueue(){
    if(head!=NULL){
        struct Node* ptr;
        ptr = head;
        head = ptr->next;
        free(ptr);
    }
}


void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
   cout<<endl;
}

int top(){
    return head->data;
}


bool isExists(int value){
    struct Node* ptr = head;
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

    deQueue();
    deQueue();

    display();
    return 0;
}




