#include<iostream>

int main(){
     int option;

    // menu 
      std::cout << " ********  Welcome to Virtual Line System ******** \n\n";
      std::cout << "\t1.Call a customer \n\t2.Add a customer \n\t3.Quit \n\tEnter option : ";
      std::cin >> option;

   
   if (option == 1) {

     std::cout << "option 1";

   }
   else if (option == 2) {
        
     std::cout << "option 2";
   }
   else if (option == 3) {
        
     std::cout << "option 3";
   }

    // menu loop for if the option entered is not on the list 
    while ( option > 3)
    {
      
      std::cout << " ********  Welcome to Virtual Line System ******** \n\n";
      std::cout << "\t The number entered is not on the option list!!! TRY AGAIN!!\n";
      std::cout << "\t 1.Call a customer \n\t 2.Add a customer \n\t 3.Quit \n Enter option :__\b\b ";
      std::cin >> option;
    }
    while ( option < 1)
    {
      
      std::cout << "\n\t The number entered is not on the option list!!! TRY AGAIN!!\n";
      std::cout << "\t 1.Call a customer \n\t 2.Add a customer \n\t 3.Quit \n Enter option :__\b\b ";
      std::cin >> option;
    }
    
   
     

     return 0;
};