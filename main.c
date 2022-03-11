#include <stdio.h>
#include <stdlib.h>



int main()
{

int action;
    printf("select action\n");

    printf("1.Add new patron\n");
    printf("2.View patron\n");
    printf("3.New book\n");
    printf("4.Add new book\n");
    printf("Your action: ");
    scanf("%d",&action);
    if (action< 1|| action> 4){

    printf("invalid action.Try again\n");

    }
    return action;
}



  void execute_action (int action){
     switch (action){
     case 1:
         printf("1.adding a new patron\n");
         break;
     case 2:
         printf("Here is a list of patrons\n");
         break;
      case 3:
         printf("Here is a list of all books");
         break;
      case 4:
           printf("Adding a new books\n");
           break;
      default:
           printf("invalid action.\n");
   }

}
 int menu()
{
  printf("COUNTRY LIBRARY SYSTEM!\n");
  printf("WELCOME SANDRA!\n");
  execute_action(menu());
  return 0;
}








