#include<iostream>
#include<cstring>
using namespace std;

struct customer{
    string name ;
    customer *link ;
    
};
// this function prints contents of linked list 
// starting from the given node 
void print(customer *n){

    while ( n != NULL)
        {
            cout << n->name << " ";
            n = n ->link ;
        }
        
};

void append(customer **head , string nme){

    // creating a new customer
    customer *new_customer = new customer();
    //linking prev node with new node 
    customer *last = *head ;
    // assigning data to new node 
    new_customer ->name = nme;
    // last node so the link to the next node is 
    // is null
    new_customer ->link = NULL;

    // if the list is empty make the new node 
    // the head
    if ( * head == NULL){

        *head = new_customer;
        return;
    }
    //traverse till the last node 
    while (last ->link !=NULL){
        last = last ->link;
    }
    last ->link = new_customer;
};

int main(){

    customer* head = NULL;

    head = new customer();

    head ->name ="Loveday";
    head ->link = NULL ;

    append(&head , "Ronald");

    print(head);



    return 0;
}