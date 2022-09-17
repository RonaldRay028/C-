#include<iostream>
#include<cstring>
using std::string;
using std::cout;


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
void print_2( customer *n){

    cout << n ->name << " \n";
}
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
void delete_cust( customer **head ){
    // storing the head 
    customer *temp = *head;

    if ( temp != NULL ){
        // changing the link on the head 
       *head = temp->link ;

        return;
    }
}

int main(){
    using std::cin;

    int option;
    string nme ;
    customer *head =NULL;

    cout << " ********  Welcome to Virtual Line System ******** \n\n";


    while (true)
    {
        cout << "\t1.Call a customer \n\t2.Add a customer \n\t3.Quit \n\tEnter option : ";
        cin >> option;
        std::cout << std::endl;
        if ( option == 1)
        {
            if (head == NULL)
            {
                cout << "\tNO CUSTOMER FOR NOW \n\n";
            }else{
                cout << "\t "; 
                print_2(head);
                delete_cust(&head);
                cout << "\n";

            }
      
        }
        else if ( option == 2){
            cout << "\tEnter name of Customer: ";
            cin >> nme ;
            append(&head , nme);
        }
        else if (option == 3){
            cout << "\tBYE!!\n";
            break;
        }
        else {
            cout << "Number entered is not part of the options given !!\n\n";
        }
        
    }
    


    return 0;
}