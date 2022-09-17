#include<iostream>
using namespace std;

class stack{
    private:
    int plate;
    // link to the next plate 
    stack *link;

    public:
    stack ();
    //Look at the plate at the top of the stack
    void peek();
    //Adds new plate at the top of stack 
    void push( stack ** head , int p);
    // To delete the plate at the top of the stack
    void pop ( stack **head);
    // Gives the size of the stack 
    void size(stack *head);
};
stack::stack(){
    plate = NULL;
    link = NULL;
}

int main(){

    stack *user = NULL;
    user = new stack();
    unsigned opinion;

    while (true)
    {
        cout << "\t************************************************";
        cout << "* \t\n\t*\t1.Enter a plate\t\t\t\t*\n";
        cout << "\t* \t2.Use a plate\t\t\t\t*\n";
        cout << "\t* \t3.See plate at the top\t\t\t*\n";
        cout << "\t* \t4.Check if they are plates\t\t*\n";
        cout << "\t* \t5.Number of plates\t\t\t*";
        cout << "\n\t*************************************************";
        cout << "\n Enter opinion :___\b\b";
        cin >> opinion;
        int i = 1;

        if (opinion == 1){
            user->push(&user, i );
        }else if ( opinion == 2){
            cout << "\n\t\t";
            user->peek();
            cout << "\n";
            user->pop(&user);
        }else if ( opinion == 3){
            cout << "\n\t\t";
            user->peek();
            cout << "\n";
        }else if ( opinion == 4){
            cout << "\n\t\t";
            cout << "opinion 4";
            cout << "\n";
        }else if (opinion == 5){
            cout << "\n\t\t";
            user->size(user);
            cout << "\n";
        }else if ( opinion == 6){
            break;
        }
        i = i+1;
    }

   /* user->push (&user , 4);
    user->push (&user , 5);
    user->peek();
    user->pop(&user);
    user->peek();
    user->size(user);*/



    return 0;
}

void stack::peek(){
    cout << plate << " ";
};

void stack::push( stack ** head , int p){
    // creating a new plate in the stack
    stack *new_plate = new stack();
    // assigning a value to the plate
    new_plate->plate = p;
    // linking the new plate to the prev plate or head
    new_plate->link = (*head);
    // assigning the value of new plate to the prev plate or head
    (*head) = new_plate ;
};
void stack::pop(stack **head){

    stack *temp = *head;

    if ( temp != NULL){
        // assigning the link on the head to temp
        *head = temp ->link;
    }
};
void stack::size(stack * head){
    int stack_size ;
    // loop that counts how many plates are in 
    // the stack 
    for (size_t i = 1; head != NULL; i++)
    {
        head = head ->link;
        
        stack_size = i ;
    }

    cout << stack_size << " ";
};