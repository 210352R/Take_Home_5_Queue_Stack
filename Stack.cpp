/*#include <iostream>
using namespace std;


struct Node{
    int data;
    struct Node* next;
};

//Head pointer ---
struct Node* head = NULL;

bool isExists(int value);

//insert value to start --
void push(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   if(head==NULL){
    head = new_node;
    head->next = NULL;
   }else{
       new_node->next = head;
       head = new_node;
   }

}

void pop(){
    if(head!=NULL){
        struct Node* ptr;
        ptr = head;
        head = ptr->next;
        free(ptr);
    }
}


int peek(){
    return head->data;
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

int main(){

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    display();

    pop();
    pop();

    display();

    return 0;
}*/

