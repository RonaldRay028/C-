#include<iostream>
using namespace std;

struct stack {
    int plate;
    stack *link;
};
// function peeks at the plate at the top of the stack 
void peek( stack *p){
    // displaying the output 
    cout << p->plate << " ";
};
// function addsnew plate at the top of stack 
void push(stack ** head, int p){
    // creating a new plate in the stack
    stack *new_plate = new stack();
    // assigning a value to the plate 
    new_plate->plate = p ;
    // linking the new plate to the prev plate or head
    new_plate ->link = (*head);
    // assigning the value of new plate to the prev plate or head  
    ( *head ) = new_plate ;

};
void pop (stack **head, int HEAD){

    stack *temp = *head;

    if ( temp != NULL){
        // assigning the link on the head to temp
        *head = temp ->link;
    }
}
void size(stack * head){
    int stack_size ;
    for (size_t i = 1; head != NULL; i++)
    {
        head = head ->link;
        
        stack_size = i ;
    }

    cout << stack_size << " ";
    

};
bool is_Empty(){
    
}

int main(){

    stack *head = NULL;
    head = new stack();
    stack *new_node =  new stack();

    head->plate = 3;
    head ->link = new_node;

    new_node->plate = 4;
    new_node->link = NULL;

    push (&head , new_node->plate);
    peek(head);
    pop(&head , head->plate);
    peek(head);
    size(head);

    return 0;
}